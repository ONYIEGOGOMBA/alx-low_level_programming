section .data
	hello_message db 'Hello, Holberton', 0
	format db '%s', 0
	newline db 10, 0

section .text
	global main
	extern printf

main:
	; Push the format string and the address of the hello_message to the stack
	push format
	push hello_message
	call printf	; Call printf with the format string and the address of hello_message
	add rsp, 16	; Clean up the stack after the printf call

	; Print a new line
	push format
	push newline
	call printf	; Call printf with the format string and the address of newline
	add rsp, 16	; Clean up the stack after the printf call

	; Exit the program
	xor rdi, rdi	; Set the exit code to 0
	mov rax, 60	; Syscall number for exit
	syscall		; Invoke the syscall
