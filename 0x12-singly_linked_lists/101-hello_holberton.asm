section .data
   msg: db "Hello, Holberton", 10
   fmt: db "%s", 10, 0

section .text
   global main

extern printf

main:
   push rbp
   mov rdi,fmt
   mov rsi,msg
   xor rax,rax
   call printf
   pop rbp
   xor rax,rax
   ret
section .data
   msg: db "Hello, Holberton", 10

section .text
   global _start

_start:
   mov eax, 1
   mov ebx, 1
   mov ecx, msg
   mov edx, 17
   int 0x80

   mov eax, 1
   xor ebx, ebx
   int 0x80

