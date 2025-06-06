global ft_strcmp

section .text
ft_strcmp:
	;rdi = s1
	;rsi = s2

; We are using al and bl to temporarily store chars from our 2 strings 

.loop:
	mov		al, [rdi]
	mov		bl, [rsi]
	cmp		al, bl
	jne		.diff
	test	al, al
	je		.equal
	inc		rdi
	inc		rsi
	jmp		.loop

.diff:
	movzx		rax, al
	movzx		rbx, bl
	sub		rax, rbx
	ret

.equal:
	xor		rax, rax
	ret
