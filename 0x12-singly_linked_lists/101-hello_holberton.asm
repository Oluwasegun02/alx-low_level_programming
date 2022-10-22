section .data
msg: db "Hello, Holberton", 0
fmt: db "%s", 10, 0

global main
extern printf
section.text

main:

mov edi, fmt
mov esi, msg
mov eax, 0
call printf

mov eax, 0
ret
