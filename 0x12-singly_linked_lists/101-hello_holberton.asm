section .data
    format db "Hello, Holberton", 0
    newline db 10, 0

section .text
    extern printf

global main
main:
    ; Call printf to print the string
    mov rdi, format
    xor rax, rax ; Clear RAX to indicate printf uses the number of floating-point parameters in XMM registers
    call printf

    ; Print a new line
    mov rdi, newline
    xor rax, rax
    call printf

    ; Exit the program
    mov eax, 0x60
    xor edi, edi
    syscall

