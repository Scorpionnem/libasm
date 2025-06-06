global ft_strlen

section .text
ft_strlen:
	mov		rax, 0 ; sets rax to 0

.loop:
	cmp		byte [rdi + rax], 0 ; compares current char to 0
	je		.end ; if equal return
	inc		rax ; else increment and loop
	jmp		.loop

.end:
	ret
