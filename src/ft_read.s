global ft_read
extern __errno_location

section .text
ft_read:
	;rdi = fd
	;rsi = buf
	;rdx = nb of chars to read
	mov	rax, 0
	syscall

	cmp	rax, 0
	jge	.noerror

	neg	rax

	mov	rdi, rax
	call	__errno_location
	mov	dword [rax], edi

	mov rax, -1
	ret

.noerror:
	ret
