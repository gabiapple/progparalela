	.file	"test1.c"
	.text
	.p2align 4,,15
	.globl	test1
	.type	test1, @function
test1:
.LFB13:
	.cfi_startproc
	subl	$12, %esp
	.cfi_def_cfa_offset 16
	xorl	%eax, %eax
	movl	16(%esp), %edx
	movl	20(%esp), %ecx
	.p2align 4,,10
	.p2align 3
.L3:
	fldl	(%ecx,%eax,8)
	faddl	(%edx,%eax,8)
	fstpl	(%edx,%eax,8)
	addl	$1, %eax
	cmpl	$65536, %eax
	jne	.L3
	addl	$12, %esp
	.cfi_def_cfa_offset 4
	ret
	.cfi_endproc
.LFE13:
	.size	test1, .-test1
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
