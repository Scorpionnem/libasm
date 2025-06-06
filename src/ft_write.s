global ft_write
extern __errno_location

section .text
ft_write:
	;rdi = fd
	;rsi = str
	;rdx = nb of chars to write
	mov	rax, 1
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
