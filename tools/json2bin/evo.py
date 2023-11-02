#!/usr/bin/env python3
import pathlib


import json2b as j2b


from consts import (
    item
    moves
)


consts.pokemon import (
    evo_methods
    species
)


def get_evo_params(method: EvoMethod, evo: list):
    maybe_param = evo[1]
    final_param = 0
    #None of these take an extra parameter
    if method in set([
        evo_methods.EvoMethod.NONE,
        evo_methods.EvoMethod.HAPPINESS,
        evo_methods.EvoMethod.HAPPINESS_DAY,
        evo_methods.EvoMethod.HAPPINESS_NIGHT,
        evo_methods.EvoMethod.TRADE,
        evo_methods.EvoMethod.ELECTRIC_FIELD,
        evo_methods.EvoMethod.MOSSY_STONE,
        evo_methods.EvoMethod.ICY_STONE]):
        final_param = 0
    # These all specify a basic integer param
    elif method in set([
        evo_methods.EvoMethod.LEVEL_UP,
        evo_methods.EvoMethod.LEVEL_ATK_GT_DEF,
        evo_methods.EvoMethod.LEVEL_ATK_EQ_DEF,
        evo_methods.EvoMethod.LEVEL_ATK_LT_DEF,
        evo_methods.EvoMethod.LEVEL_PID_LOW,
        evo_methods.EvoMethod.LEVEL_PID_HIGH,
        evo_methods.EvoMethod.LEVEL_NINJASK,
        evo_methods.EvoMethod.LEVEL_SHEDINJA,
        evo_methods.EvoMethod.LEVEL_MALE,
        evo_methods.EvoMethod.LEVEL_FEMALE,
        evo_methods.EvoMethod.BEAUTY]):
        final_param = maybe_param
    # These specify an item
    elif method in set([
        evo_methods.EvoMethod.TRADE_WITH_ITEM,
        evo_methods.EvoMethod.USE_ITEM,
        evo_methods.EvoMethod.USE_ITEM_MALE,
        evo_methods.EvoMethod.USE_ITEM_FEMALE,
        evo_methods.EvoMethod.USE_ITEM_DAY,
        evo_methods.EvoMethod.USE_ITEM_NIGHT]):
        final_param = item.Item[maybe_param].value
    elif method == EvoMethod.KNOW_MOVE:
        final_param = moves.Move[maybe_param].value
    elif method == EvoMethod.MON_IN_PARTY:
        final_param = species.Species[maybe_param].value

    return final_param


def table_line(evo_method: int, evo_params: int, species: int) -> bytes:
    binary = bytearray([])
    binary = binary + method.to_bytes(2, 'little')
    binary = binary + params.to_bytes(2, 'little')
    binary = binary + target.to_bytes(2, 'little')
    return bytes(binary)
    

def parse_evolutions(table: list, _size: int, _enum: None):
    out = []
    for j in range(min(len(table), 7)):
        evo = table[j]
        method = evo_methods.EvoMethod[evo[0]]
        params = get_evo_params(method, evo)
        target = species.Species[evo[-1]]
        out.extend(table_line(evo_methods.EvoMethod[method].value, params, species.Species[target].value))
    return out
        

SCHEMA = j2b.Parser() \
         .register('evolutions', 44, parse_evolutions, optional=True)


def indexer(file_path: pathlib.Path) -> int:
    name = file_path.parent.stem.upper()
    if name == '000': return 0
    if name == 'egg': return 494
    if name == 'bad_egg': return 495
    if file_path.parent.parent.stem == 'forms':
        species_idx = file_path.parent.parent.parent.stem.upper()
        form = file_path.parent.stem.upper()
        return FORM_INDICES[species_idx][form]
    return species.PokemonSpecies[f'SPECIES_{name}'].value


args = j2b.ARGPARSER.parse_args()
j2b.json2bin(args.source_dir,
             SCHEMA,
             args.private_dir,
             args.output_dir,
             indexer,
             glob_pattern='**/data.json',
             narc_name='evo',
             narc_packer=args.knarc)
