section .data
    hello db 'Hello, Holberton', 0
    format db '%s\n', 0

section .text
    global main

main:
    push rbp
    mov rbp, rsp
    
    mov rdi, format
    mov rsi, hello
    xor rax, rax
    call printf
    
    mov rsp, rbp
    pop rbp
    xor rax, rax
    ret