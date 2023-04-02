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

