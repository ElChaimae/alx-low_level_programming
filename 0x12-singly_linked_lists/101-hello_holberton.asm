section .data
    hello db 'Hello, Holberton',10 ; Define the string to be printed

section .text
    global _start

_start:
    ; Prepare the arguments for the write system call
    mov rax, 1          ; Set the system call number for write to 1
    mov rdi, 1          ; Set the file descriptor for stdout to 1
    mov rsi, hello      ; Set the address of the string to be printed to RSI
    mov rdx, 16         ; Set the length of the string to be printed to RDX

    ; Call the write system call to print the string
    syscall

    ; Exit the program with a status code of 0
    mov rax, 60         ; Set the system call number for exit to 60
    xor rdi, rdi        ; Set the exit status code to 0
    syscall

