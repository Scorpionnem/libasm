global ft_strdup
extern malloc
extern ft_strlen

section .text
ft_strdup:
; takes a str as argument, we save its adress in rsi, rcx will be used for strlen

	mov	 rsi, rdi
	push rsi ; saves rsi in the stack because calling malloc will destroy it

	call	ft_strlen

	mov		rdi, rax
	inc		rdi

	call	malloc ; this steps allocates the memory for the new string
	pop		rsi ; take rsi back from the stack after calling malloc
	test	rax, rax
	je		.malloc_fail

	mov		rdx, rax
	mov		r8, 0

.copy_loop:
; copies the chars from the origin string to destination
	mov al, byte [rsi + r8]
	mov	byte [rdx + r8], al
	cmp	al, 0
	je	.done
	inc	r8
	jmp	.copy_loop

.done:
; this one is self explanatory
	mov	rax, rdx
	ret

.malloc_fail:
; called if memory allocation fails
	mov rax, 0
	ret
