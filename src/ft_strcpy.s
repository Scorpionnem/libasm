global ft_strcpy

section .text
ft_strcpy:
	mov		rax, rdi ; stores rdi's start

.loop:
	mov		al, [rsi] ; stores current char in al
	mov		[rdi], al ; move current char to dest str
	inc		rdi ; increment both strings
	inc		rsi
	cmp		al, 0 ; check if we are at end of string using the current char
	jne		.loop
	ret
