	global    main
	extern    print
main:
	mov	edi, format
	xor	eax, eax
	call	printf
	mo	eax, 0
	ret
format: db `Hello, Holberton\n`,0
