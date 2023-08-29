section .data
    hello_string db "Hello, Holberton", 0

section .text
    global _start
    extern printf

_start:
    mov rdi, hello_string
    call printf

    mov rax, 60         ; syscall number for exit
    xor rdi, rdi        ; exit status 0
    syscall
