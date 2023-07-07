	.file	"p0803.c"
	.text
	.section	.rodata
.LC2:
	.string	"---< \347\275\256\346\217\233\343\201\210\345\211\215 >---"
.LC3:
	.string	"a = %d, b = %d\n"
.LC4:
	.string	"x = %lf, y = %lf\n"
.LC5:
	.string	"---< \347\275\256\346\217\233\343\201\210\345\276\214 >---"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$64, %rsp
	movl	$8, -64(%rbp)
	movl	$5, -60(%rbp)
	movsd	.LC0(%rip), %xmm0
	movsd	%xmm0, -40(%rbp)
	movsd	.LC1(%rip), %xmm0
	movsd	%xmm0, -32(%rbp)
	movl	$1, -56(%rbp)
	leaq	.LC2(%rip), %rdi
	call	puts@PLT
	cmpl	$1, -56(%rbp)
	jne	.L2
	movl	-60(%rbp), %edx
	movl	-64(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC3(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	jmp	.L3
.L2:
	movsd	-32(%rbp), %xmm0
	movq	-40(%rbp), %rax
	movapd	%xmm0, %xmm1
	movq	%rax, %xmm0
	leaq	.LC4(%rip), %rdi
	movl	$2, %eax
	call	printf@PLT
.L3:
	cmpl	$1, -56(%rbp)
	jne	.L4
	movl	-64(%rbp), %eax
	movl	%eax, -52(%rbp)
	movl	-60(%rbp), %eax
	movl	%eax, -48(%rbp)
	movl	-52(%rbp), %eax
	movl	%eax, -44(%rbp)
	jmp	.L5
.L4:
	movsd	-40(%rbp), %xmm0
	movsd	%xmm0, -24(%rbp)
	movsd	-32(%rbp), %xmm0
	movsd	%xmm0, -16(%rbp)
	movsd	-24(%rbp), %xmm0
	movsd	%xmm0, -8(%rbp)
.L5:
	leaq	.LC5(%rip), %rdi
	call	puts@PLT
	cmpl	$1, -56(%rbp)
	jne	.L6
	movl	-60(%rbp), %edx
	movl	-64(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC3(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	jmp	.L7
.L6:
	movsd	-32(%rbp), %xmm0
	movq	-40(%rbp), %rax
	movapd	%xmm0, %xmm1
	movq	%rax, %xmm0
	leaq	.LC4(%rip), %rdi
	movl	$2, %eax
	call	printf@PLT
.L7:
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.section	.rodata
	.align 8
.LC0:
	.long	0
	.long	1074528256
	.align 8
.LC1:
	.long	858993459
	.long	1075000115
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
