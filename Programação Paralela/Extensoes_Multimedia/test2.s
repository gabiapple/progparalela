	.file	"test2.c"
	.text
	.p2align 4,,15
	.globl	test2
	.type	test2, @function
test2:
.LFB37:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	xorl	%eax, %eax
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-32, %esp
	movl	8(%ebp), %edx
	movl	12(%ebp), %ecx
	.p2align 4,,10
	.p2align 3
.L3:
	vmovupd	(%edx,%eax), %xmm1
	vmovupd	(%ecx,%eax), %xmm0
	vinsertf128	$0x1, 16(%edx,%eax), %ymm1, %ymm1
	vinsertf128	$0x1, 16(%ecx,%eax), %ymm0, %ymm0
	vaddpd	%ymm0, %ymm1, %ymm0
	vmovupd	%xmm0, (%edx,%eax)
	vextractf128	$0x1, %ymm0, 16(%edx,%eax)
	addl	$32, %eax
	cmpl	$524288, %eax
	jne	.L3
	vzeroupper
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE37:
	.size	test2, .-test2
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
