	.file	"test1.c"
	.text
	.p2align 4,,15
	.globl	test1
	.type	test1, @function
test1:
.LFB37:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-32, %esp
	movl	8(%ebp), %edx
	movl	12(%ebp), %ecx
	leal	32(%edx), %eax
	cmpl	%eax, %ecx
	jb	.L17
.L7:
	xorl	%eax, %eax
	.p2align 4,,10
	.p2align 3
.L5:
	vmovupd	(%ecx,%eax), %xmm0
	vmovupd	(%edx,%eax), %xmm1
	vinsertf128	$0x1, 16(%ecx,%eax), %ymm0, %ymm0
	vinsertf128	$0x1, 16(%edx,%eax), %ymm1, %ymm1
	vaddpd	%ymm0, %ymm1, %ymm0
	vmovupd	%xmm0, (%edx,%eax)
	vextractf128	$0x1, %ymm0, 16(%edx,%eax)
	addl	$32, %eax
	cmpl	$524288, %eax
	jne	.L5
	vzeroupper
	leave
	.cfi_remember_state
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.p2align 4,,10
	.p2align 3
.L17:
	.cfi_restore_state
	leal	32(%ecx), %eax
	cmpl	%eax, %edx
	jnb	.L7
	xorl	%eax, %eax
	.p2align 4,,10
	.p2align 3
.L6:
	fldl	(%edx,%eax,8)
	faddl	(%ecx,%eax,8)
	fstpl	(%edx,%eax,8)
	addl	$1, %eax
	cmpl	$65536, %eax
	jne	.L6
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE37:
	.size	test1, .-test1
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
