	.file	"test2.c"
	.text
	.p2align 4,,15
	.globl	test2
	.type	test2, @function
test2:
.LFB18:
	.cfi_startproc
	movq	%rdi, %rax
	xorl	%r11d, %r11d
	pushq	%rbx
	.cfi_def_cfa_offset 16
	.cfi_offset 3, -16
	salq	$60, %rax
	shrq	$63, %rax
	testl	%eax, %eax
	je	.L2
	movsd	(%rdi), %xmm0
	movb	$1, %r11b
	addsd	(%rsi), %xmm0
	movsd	%xmm0, (%rdi)
.L2:
	movl	$65536, %r10d
	xorl	%edx, %edx
	subl	%eax, %r10d
	movl	%eax, %eax
	movl	%r10d, %r9d
	leaq	0(,%rax,8), %rcx
	xorl	%eax, %eax
	shrl	%r9d
	leal	(%r9,%r9), %ebx
	leaq	(%rdi,%rcx), %r8
	addq	%rsi, %rcx
	.p2align 4,,10
	.p2align 3
.L5:
	movsd	(%rcx,%rax), %xmm0
	addl	$1, %edx
	movhpd	8(%rcx,%rax), %xmm0
	addpd	(%r8,%rax), %xmm0
	movapd	%xmm0, (%r8,%rax)
	addq	$16, %rax
	cmpl	%r9d, %edx
	jb	.L5
	cmpl	%ebx, %r10d
	leal	(%r11,%rbx), %edx
	je	.L1
	movslq	%edx, %rdx
	leaq	(%rdi,%rdx,8), %rax
	movsd	(%rax), %xmm0
	addsd	(%rsi,%rdx,8), %xmm0
	movsd	%xmm0, (%rax)
.L1:
	popq	%rbx
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE18:
	.size	test2, .-test2
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
