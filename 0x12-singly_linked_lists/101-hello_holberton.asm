; File: 101-hello_holberton.asm
; Desc: Print Hello, Holberton followed by a new line.

section .data
msg:	db "Hello, Holberton", 0
fmt:	db "%s", 10, 0

section .text
    global main
    extern printf

main:
    mov esi, msg
    mov edi, fmt
    xor eax, eax
    call printf
    
    xor eax, eax
    ret
