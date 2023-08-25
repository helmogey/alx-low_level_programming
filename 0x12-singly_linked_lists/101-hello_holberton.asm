section .data
    message db 'Hello, Holberton', 0x0A  ;

section .text
    global _start

_start:
    ; Write the message to stdout
    mov rax, 1                    ;
    mov rdi, 1                    ;
    mov rsi, message              ;
    mov rdx, 17                   ;
    syscall

    ; Exit the program
    mov eax, 60                   ;
    xor edi, edi                  ;
    syscall