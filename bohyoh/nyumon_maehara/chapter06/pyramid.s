	.file	"pyramid.c"
	.text
	.section	.rodata
	.align 8
.LC0:
	.string	"\346\255\243\343\201\256\346\225\264\346\225\260\343\202\222\345\205\245\345\212\233\343\201\227\343\201\246\343\201\217\343\201\240\343\201\225\343\201\204\343\200\202"
.LC1:
	.string	"%d"
	.text
	.globl	scan_pint
	.type	scan_pint, @function
scan_pint:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
.L2:
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movq	stdin(%rip), %rax
	leaq	-12(%rbp), %rdx
	leaq	.LC1(%rip), %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc99_fscanf@PLT
	movl	-12(%rbp), %eax
	testl	%eax, %eax
	jle	.L2
	nop
	movq	-8(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L3
	call	__stack_chk_fail@PLT
.L3:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	scan_pint, .-scan_pint
	.globl	pyramid
	.type	pyramid, @function
pyramid:
.LFB1:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	%edi, -20(%rbp)
	movl	$1, -16(%rbp)
	jmp	.L5
.L12:
	movl	$0, -12(%rbp)
	jmp	.L6
.L7:
	movl	$32, %edi
	call	putchar@PLT
	addl	$1, -12(%rbp)
.L6:
	movl	-20(%rbp), %eax
	subl	-16(%rbp), %eax
	cmpl	%eax, -12(%rbp)
	jl	.L7
	movl	$0, -8(%rbp)
	jmp	.L8
.L9:
	movl	$42, %edi
	call	putchar@PLT
	addl	$1, -8(%rbp)
.L8:
	movl	-16(%rbp), %eax
	addl	%eax, %eax
	subl	$1, %eax
	cmpl	%eax, -8(%rbp)
	jl	.L9
	movl	$0, -4(%rbp)
	jmp	.L10
.L11:
	movl	$32, %edi
	call	putchar@PLT
	addl	$1, -4(%rbp)
.L10:
	movl	-20(%rbp), %eax
	subl	-16(%rbp), %eax
	cmpl	%eax, -4(%rbp)
	jl	.L11
	movl	$10, %edi
	call	putchar@PLT
	addl	$1, -16(%rbp)
.L5:
	movl	-16(%rbp), %eax
	cmpl	-20(%rbp), %eax
	jle	.L12
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	pyramid, .-pyramid
	.section	.rodata
	.align 8
.LC2:
	.string	"\343\203\224\343\203\251\343\203\237\343\203\203\343\203\211\343\202\222\344\275\234\343\202\212\343\201\276\343\201\231\343\200\202"
	.text
	.globl	main
	.type	main, @function
main:
.LFB2:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	leaq	.LC2(%rip), %rdi
	call	puts@PLT
	movl	$0, %eax
	call	scan_pint
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	movl	%eax, %edi
	call	pyramid
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
