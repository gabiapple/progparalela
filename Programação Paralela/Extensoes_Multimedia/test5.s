	.file	"test5.c"
	.text
	.p2align 4,,15
	.globl	test5
	.type	test5, @function
test5:
.LFB18:
	.cfi_startproc
	pushq	%r15
	.cfi_def_cfa_offset 16
	.cfi_offset 15, -16
	movq	%rdi, %r10
	movq	%rsi, %r15
	movq	%rsi, %r11
	pushq	%r14
	.cfi_def_cfa_offset 24
	.cfi_offset 14, -24
	movabsq	$34359738368, %r14
	addq	%rdi, %r14
	pushq	%r13
	.cfi_def_cfa_offset 32
	.cfi_offset 13, -32
	movl	$65536, %r13d
	pushq	%r12
	.cfi_def_cfa_offset 40
	.cfi_offset 12, -40
	movq	%rdi, %r12
	xorl	%edi, %edi
	pushq	%rbp
	.cfi_def_cfa_offset 48
	.cfi_offset 6, -48
	pushq	%rbx
	.cfi_def_cfa_offset 56
	.cfi_offset 3, -56
	.p2align 4,,10
	.p2align 3
.L2:
	movq	%r10, %rax
	xorl	%esi, %esi
	salq	$60, %rax
	shrq	$63, %rax
	testl	%eax, %eax
	je	.L6
	movsd	(%r10), %xmm0
	movb	$1, %sil
	addsd	(%r11), %xmm0
	movsd	%xmm0, (%r10)
.L6:
	movl	%r13d, %ebx
	xorl	%edx, %edx
	subl	%eax, %ebx
	movl	%eax, %eax
	movl	%ebx, %r9d
	leaq	0(,%rax,8), %rcx
	xorl	%eax, %eax
	shrl	%r9d
	leal	(%r9,%r9), %ebp
	leaq	(%r10,%rcx), %r8
	addq	%r11, %rcx
	.p2align 4,,10
	.p2align 3
.L7:
	movsd	(%rcx,%rax), %xmm0
	addl	$1, %edx
	movhpd	8(%rcx,%rax), %xmm0
	addpd	(%r8,%rax), %xmm0
	movapd	%xmm0, (%r8,%rax)
	addq	$16, %rax
	cmpl	%edx, %r9d
	ja	.L7
	cmpl	%ebp, %ebx
	leal	(%rsi,%rbp), %edx
	je	.L4
	movslq	%edx, %rdx
	addq	%rdi, %rdx
	leaq	(%r12,%rdx,8), %rax
	movsd	(%rax), %xmm0
	addsd	(%r15,%rdx,8), %xmm0
	movsd	%xmm0, (%rax)
.L4:
	addq	$524288, %r10
	addq	$524288, %r11
	addq	$65536, %rdi
	cmpq	%r14, %r10
	jne	.L2
	popq	%rbx
	.cfi_def_cfa_offset 48
	popq	%rbp
	.cfi_def_cfa_offset 40
	popq	%r12
	.cfi_def_cfa_offset 32
	popq	%r13
	.cfi_def_cfa_offset 24
	popq	%r14
	.cfi_def_cfa_offset 16
	popq	%r15
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE18:
	.size	test5, .-test5
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
