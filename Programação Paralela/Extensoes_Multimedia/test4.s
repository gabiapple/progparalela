	.file	"test4.c"
	.text
	.p2align 4,,15
	.globl	test4
	.type	test4, @function
test4:
.LFB18:
	.cfi_startproc
	xorl	%eax, %eax
	.p2align 4,,10
	.p2align 3
.L3:
	movapd	(%rdi,%rax), %xmm0
	addpd	(%rsi,%rax), %xmm0
	movapd	%xmm0, (%rdi,%rax)
	addq	$16, %rax
	cmpq	$524288, %rax
	jne	.L3
	rep ret
	.cfi_endproc
.LFE18:
	.size	test4, .-test4
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
