	.include "macros/function.inc"
	.include "include/ghttpcommon.inc"

	

	.text


	arm_func_start ghiCreateLock
ghiCreateLock: ; 0x02220844
	bx lr
	arm_func_end ghiCreateLock

	arm_func_start ghiFreeLock
ghiFreeLock: ; 0x02220848
	bx lr
	arm_func_end ghiFreeLock

	arm_func_start ghiLock
ghiLock: ; 0x0222084C
	bx lr
	arm_func_end ghiLock

	arm_func_start ghiUnlock
ghiUnlock: ; 0x02220850
	bx lr
	arm_func_end ghiUnlock

	arm_func_start ghiDecryptReceivedData
ghiDecryptReceivedData: ; 0x02220854
	stmfd sp!, {r3, r4, r5, r6, r7, lr}
	sub sp, sp, #0x10
	mov r1, #0
	mov r7, r0
	str r1, [sp, #0xc]
	str r1, [sp, #8]
	add r5, sp, #8
	add r4, sp, #0xc
_02220874:
	ldr ip, [r7, #0xa8]
	ldr r0, [r7, #0xa4]
	ldr r2, [r7, #0x9c]
	sub r0, r0, ip
	str r0, [sp, #0xc]
	ldr r3, [r7, #0x80]
	ldr r0, [r7, #0x7c]
	ldr r1, [r7, #0x78]
	sub r0, r0, r3
	str r0, [sp, #8]
	add r0, r1, r3
	stmia sp, {r0, r5}
	ldr r6, [r7, #0x180]
	mov r0, r7
	mov r3, r4
	add r1, r7, #0x164
	add r2, r2, ip
	blx r6
	mov r6, r0
	cmp r6, #2
	bne _022208E4
	ldr r1, [r7, #0x88]
	add r0, r7, #0x74
	bl ghiResizeBuffer
	cmp r0, #0
	addeq sp, sp, #0x10
	moveq r0, #0
	ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
_022208E4:
	cmp r6, #2
	ldreq r0, [sp, #8]
	cmpeq r0, #0
	beq _02220874
	ldr r1, [r7, #0xa8]
	ldr r0, [sp, #0xc]
	add r0, r1, r0
	str r0, [r7, #0xa8]
	ldr r1, [r7, #0x80]
	ldr r0, [sp, #8]
	add r0, r1, r0
	str r0, [r7, #0x80]
	ldr r1, [r7, #0xa8]
	cmp r1, #0xff
	ble _02220954
	ldr r0, [r7, #0xa4]
	subs r4, r0, r1
	bne _02220938
	add r0, r7, #0x98
	bl ghiResetBuffer
	b _02220954
_02220938:
	ldr r0, [r7, #0x9c]
	mov r2, r4
	add r1, r0, r1
	bl memmove
	mov r0, #0
	str r0, [r7, #0xa8]
	str r4, [r7, #0xa4]
_02220954:
	cmp r6, #3
	addne sp, sp, #0x10
	mov r0, #1
	ldmneia sp!, {r3, r4, r5, r6, r7, pc}
	str r0, [r7, #0xfc]
	mov r0, #0x11
	str r0, [r7, #0x38]
	mov r0, #0
	add sp, sp, #0x10
	ldmia sp!, {r3, r4, r5, r6, r7, pc}
	arm_func_end ghiDecryptReceivedData

	arm_func_start ghiDoReceive
ghiDoReceive: ; 0x0222097C
	stmfd sp!, {r3, r4, r5, r6, r7, lr}
	mov r7, r0
	mov r5, r2
	ldr r2, [r5, #0]
	ldr r0, [r7, #0x134]
	mov r6, r1
	cmp r0, #0
	sub r4, r2, #1
	beq _022209D0
	bl current_time
	ldr r1, _02220B8C ; =0x0222911C
	ldr r3, [r7, #0x138]
	ldr r2, [r1, #0]
	add r2, r3, r2
	cmp r0, r2
	movlo r0, #1
	ldmloia sp!, {r3, r4, r5, r6, r7, pc}
	str r0, [r7, #0x138]
	ldr r0, [r1, #4]
	cmp r4, r0
	movge r4, r0
_022209D0:
	ldr r1, [r7, #0x84]
	ldr r0, [r7, #0x80]
	cmp r1, r0
	bge _02220A18
	mov r1, r6
	mov r2, r5
	add r0, r7, #0x74
	bl ghiReadDataFromBuffer
	ldr r1, [r7, #0x84]
	ldr r0, [r7, #0x80]
	cmp r1, r0
	bne _02220A10
	ldr r0, [r7, #0xf8]
	str r0, [r7, #0x80]
	ldr r0, [r7, #0xf8]
	str r0, [r7, #0x84]
_02220A10:
	mov r0, #0
	ldmia sp!, {r3, r4, r5, r6, r7, pc}
_02220A18:
	ldr r0, [r7, #0x48]
	mov r1, r6
	mov r2, r4
	mov r3, #0
	bl recv
	mov r2, r0
	mvn r0, #0
	str r2, [sp]
	cmp r2, r0
	bne _02220A88
	ldr r0, [r7, #0x48]
	bl GOAGetLastError
	mvn r2, #5
	cmp r0, r2
	subne r1, r2, #0x14
	cmpne r0, r1
	subne r1, r2, #0x46
	cmpne r0, r1
	moveq r0, #1
	ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
	mov r2, #1
	str r2, [r7, #0xfc]
	mov r1, #5
	str r1, [r7, #0x38]
	str r0, [r7, #0x4c]
	str r2, [r7, #0x130]
	mov r0, #3
	ldmia sp!, {r3, r4, r5, r6, r7, pc}
_02220A88:
	cmp r2, #0
	bne _02220AA0
	mov r0, #1
	str r0, [r7, #0x130]
	mov r0, #2
	ldmia sp!, {r3, r4, r5, r6, r7, pc}
_02220AA0:
	ldr r0, [r7, #0x168]
	cmp r0, #0
	beq _02220B6C
	mov r1, r6
	add r0, r7, #0x98
	bl ghiAppendDataToBuffer
	cmp r0, #0
	moveq r0, #3
	ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
	mov r0, r7
	bl ghiDecryptReceivedData
	cmp r0, #0
	bne _02220AEC
	mov r0, #1
	str r0, [r7, #0xfc]
	mov r0, #0x11
	str r0, [r7, #0x38]
	mov r0, #3
	ldmia sp!, {r3, r4, r5, r6, r7, pc}
_02220AEC:
	ldr r1, [r7, #0x80]
	ldr r0, [r7, #0x84]
	sub r0, r1, r0
	cmp r0, #0
	bgt _02220B14
	mov r0, #0
	strb r0, [r6]
	str r0, [r5, #0]
	mov r0, #1
	ldmia sp!, {r3, r4, r5, r6, r7, pc}
_02220B14:
	ldr r0, [r5, #0]
	add r2, sp, #0
	sub r3, r0, #1
	mov r1, r6
	add r0, r7, #0x74
	str r3, [sp]
	bl ghiReadDataFromBuffer
	cmp r0, #0
	moveq r0, #3
	ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
	ldr r1, [r7, #0x84]
	ldr r0, [r7, #0x80]
	cmp r1, r0
	bne _02220B5C
	ldr r0, [r7, #0xf8]
	str r0, [r7, #0x80]
	ldr r0, [r7, #0xf8]
	str r0, [r7, #0x84]
_02220B5C:
	ldr r2, [sp]
	cmp r2, #0
	movle r0, #1
	ldmleia sp!, {r3, r4, r5, r6, r7, pc}
_02220B6C:
	mov r0, #0
	strb r0, [r6, r2]
	ldr r1, [sp]
	str r1, [r5, #0]
	ldr r1, [sp]
	cmp r1, #0
	movle r0, #1
	ldmia sp!, {r3, r4, r5, r6, r7, pc}
	; .align 2, 0
_02220B8C: .word ghiThrottleTimeDelay
	arm_func_end ghiDoReceive

	arm_func_start ghiDoSend
ghiDoSend: ; 0x02220B90
	stmfd sp!, {r4, lr}
	mov r4, r0
	ldr r0, [r4, #0x48]
	mov r3, #0
	bl send
	mvn r1, #0
	cmp r0, r1
	bne _02220BF4
	ldr r0, [r4, #0x48]
	bl GOAGetLastError
	mvn r2, #5
	cmp r0, r2
	subne r1, r2, #0x14
	cmpne r0, r1
	subne r1, r2, #0x46
	cmpne r0, r1
	moveq r0, #0
	ldmeqia sp!, {r4, pc}
	mov r1, #1
	str r1, [r4, #0xfc]
	mov r1, #5
	str r1, [r4, #0x38]
	str r0, [r4, #0x4c]
	sub r0, r1, #6
	ldmia sp!, {r4, pc}
_02220BF4:
	ldr r1, [r4, #0x10]
	cmp r1, #4
	ldreq r1, [r4, #0x148]
	addeq r1, r1, r0
	streq r1, [r4, #0x148]
	ldmia sp!, {r4, pc}
	arm_func_end ghiDoSend

	arm_func_start ghiTrySendThenBuffer
ghiTrySendThenBuffer: ; 0x02220C0C
	stmfd sp!, {r4, r5, r6, lr}
	mov r6, r0
	ldr r3, [r6, #0x5c]
	mov r5, r1
	mov r4, r2
	cmp r3, #0
	mov r3, #0
	bne _02220C50
	bl ghiDoSend
	mov r3, r0
	mvn r0, #0
	cmp r3, r0
	moveq r0, #0
	ldmeqia sp!, {r4, r5, r6, pc}
	cmp r3, r4
	moveq r0, #1
	ldmeqia sp!, {r4, r5, r6, pc}
_02220C50:
	add r0, r6, #0x50
	add r1, r5, r3
	sub r2, r4, r3
	bl ghiAppendDataToBuffer
	cmp r0, #0
	moveq r0, #0
	movne r0, #2
	ldmia sp!, {r4, r5, r6, pc}
	arm_func_end ghiTrySendThenBuffer

	.data


	.global ghiThrottleTimeDelay
ghiThrottleTimeDelay: ; 0x0222911C
	.incbin "incbin/overlay60_data.bin", 0x2DC, 0x2E0 - 0x2DC

	.global ghiThrottleBufferSize
ghiThrottleBufferSize: ; 0x02229120
	.incbin "incbin/overlay60_data.bin", 0x2E0, 0x4



	.bss


	.global Unk_ov60_02229E24
Unk_ov60_02229E24: ; 0x02229E24
	.space 0x4

	.global Unk_ov60_02229E28
Unk_ov60_02229E28: ; 0x02229E28
	.space 0x4

