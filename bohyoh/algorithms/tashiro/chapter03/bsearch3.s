	.file	"bsearch3.c"
	.text
	.globl	npcmp
	.type	npcmp, @function
npcmp:
.LFB6:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	strcmp@PLT
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	npcmp, .-npcmp
	.section	.rodata
	.align 8
.LC0:
	.string	"\345\220\215\345\211\215\343\201\253\343\202\210\343\202\213\346\244\234\347\264\242\343\202\222\350\241\214\343\201\204\343\201\276\343\201\231\343\200\202"
.LC1:
	.string	"\345\220\215\345\211\215: "
.LC2:
	.string	"%s"
	.align 8
.LC3:
	.string	"\346\216\242\347\264\242\343\201\253\345\244\261\346\225\227\343\201\227\343\201\276\343\201\227\343\201\237\343\200\202"
	.align 8
.LC4:
	.string	"\346\216\242\347\264\242\346\210\220\345\212\237\357\274\201\357\274\201\344\273\245\344\270\213\343\201\256\350\246\201\347\264\240\343\202\222\350\246\213\343\201\244\343\201\221\343\201\276\343\201\227\343\201\237\343\200\202"
.LC5:
	.string	"x[%d] : %s %dcm %dkg\n"
	.align 8
.LC6:
	.string	"\343\202\202\343\201\206\344\270\200\345\272\246\346\216\242\347\264\242\343\201\227\343\201\276\343\201\231\343\201\213\357\274\237(1)\343\201\257\343\201\204/(0)\343\201\204\343\201\204\343\201\210: "
.LC7:
	.string	"%d"
	.text
	.globl	main
	.type	main, @function
main:
.LFB7:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$224, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movq	$4538945, -176(%rbp)
	movq	$0, -168(%rbp)
	movl	$0, -160(%rbp)
	movl	$179, -156(%rbp)
	movl	$79, -152(%rbp)
	movabsq	$79505335927118, %rax
	movl	$0, %edx
	movq	%rax, -148(%rbp)
	movq	%rdx, -140(%rbp)
	movl	$0, -132(%rbp)
	movl	$172, -128(%rbp)
	movl	$63, -124(%rbp)
	movabsq	$18388512747898963, %rax
	movl	$0, %edx
	movq	%rax, -120(%rbp)
	movq	%rdx, -112(%rbp)
	movl	$0, -104(%rbp)
	movl	$176, -100(%rbp)
	movl	$52, -96(%rbp)
	movabsq	$4705489037409342803, %rax
	movl	$0, %edx
	movq	%rax, -92(%rbp)
	movq	%rdx, -84(%rbp)
	movl	$0, -76(%rbp)
	movl	$165, -72(%rbp)
	movl	$51, -68(%rbp)
	movabsq	$18378677256143188, %rax
	movl	$0, %edx
	movq	%rax, -64(%rbp)
	movq	%rdx, -56(%rbp)
	movl	$0, -48(%rbp)
	movl	$181, -44(%rbp)
	movl	$73, -40(%rbp)
	movabsq	$20632702148760404, %rax
	movl	$0, %edx
	movq	%rax, -36(%rbp)
	movq	%rdx, -28(%rbp)
	movl	$0, -20(%rbp)
	movl	$172, -16(%rbp)
	movl	$84, -12(%rbp)
	movl	$6, -220(%rbp)
	leaq	.LC0(%rip), %rdi
	call	puts@PLT
.L6:
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movq	stdin(%rip), %rax
	leaq	-208(%rbp), %rdx
	leaq	.LC2(%rip), %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc99_fscanf@PLT
	movl	-220(%rbp), %eax
	movslq	%eax, %rdx
	leaq	-176(%rbp), %rsi
	leaq	-208(%rbp), %rax
	leaq	npcmp(%rip), %r8
	movl	$28, %ecx
	movq	%rax, %rdi
	call	bsearch@PLT
	movq	%rax, -216(%rbp)
	cmpq	$0, -216(%rbp)
	jne	.L4
	leaq	.LC3(%rip), %rdi
	call	puts@PLT
	jmp	.L5
.L4:
	leaq	.LC4(%rip), %rdi
	call	puts@PLT
	movq	-216(%rbp), %rax
	movl	24(%rax), %edi
	movq	-216(%rbp), %rax
	movl	20(%rax), %edx
	movq	-216(%rbp), %rax
	leaq	-176(%rbp), %rcx
	movq	-216(%rbp), %rsi
	subq	%rcx, %rsi
	movq	%rsi, %rcx
	sarq	$2, %rcx
	movq	%rcx, %rsi
	movabsq	$7905747460161236407, %rcx
	imulq	%rsi, %rcx
	movl	%ecx, %esi
	movl	%edi, %r8d
	movl	%edx, %ecx
	movq	%rax, %rdx
	leaq	.LC5(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
.L5:
	leaq	.LC6(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movq	stdin(%rip), %rax
	leaq	-224(%rbp), %rdx
	leaq	.LC7(%rip), %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc99_fscanf@PLT
	movl	-224(%rbp), %eax
	cmpl	$1, %eax
	je	.L6
	movl	$0, %eax
	movq	-8(%rbp), %rdi
	xorq	%fs:40, %rdi
	je	.L8
	call	__stack_chk_fail@PLT
.L8:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
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
