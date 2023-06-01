	global    main
	extern    printf
main:
	mov	edi, message
	call      printf
	ret
message: db "Hello, Holberton\n", 0
