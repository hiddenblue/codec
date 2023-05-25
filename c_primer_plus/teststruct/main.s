	.arch armv5t
	.fpu softvfp
	.eabi_attribute 20, 1
	.eabi_attribute 21, 1
	.eabi_attribute 23, 3
	.eabi_attribute 24, 1
	.eabi_attribute 25, 1
	.eabi_attribute 26, 2
	.eabi_attribute 30, 6
	.eabi_attribute 34, 0
	.eabi_attribute 18, 4
	.file	"main.c"
	.text
	.section	.rodata
	.align	2
.LC0:
	.ascii	"%d\012\000"
	.text
	.align	2
	.global	main
	.syntax unified
	.arm
	.type	main, %function
main:
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 1, uses_anonymous_args = 0
	push	{fp, lr}
	add	fp, sp, #4
	ldr	r3, .L3
	ldr	r3, [r3]
	mov	r1, r3
	ldr	r0, .L3+4
	bl	printf
	ldr	r3, .L3
	ldr	r3, [r3, #4]
	mov	r1, r3
	ldr	r0, .L3+4
	bl	printf
	ldr	r3, .L3
	ldr	r3, [r3, #8]
	mov	r1, r3
	ldr	r0, .L3+4
	bl	printf
	mov	r3, #0
	mov	r0, r3
	pop	{fp, pc}
.L4:
	.align	2
.L3:
	.word	now
	.word	.LC0
	.size	main, .-main
	.ident	"GCC: (Ubuntu 11.3.0-1ubuntu1~22.04.1) 11.3.0"
	.section	.note.GNU-stack,"",%progbits
