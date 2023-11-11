#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

/*
Para agregar datos carácter por carácter se puede realizar a través de la instrucción:
putc (carácter, varibale puntero al archivo )

*/

main()
{
	FILE *final; //Referencio el archivo
	
	final = fopen("nombres.txt", "a"); //Lo vamos a abrir para añadirle contenido
	
	//Realizamos la verificacion de la existencia del archivo
	
	if(final == NULL)
	{
		printf("Falla al abrir el archivo: \n");
		exit (EXIT_FAILURE);
	}
	
	//Primero escribes lo que quieres agregar, en este caso un caracter
	putc('L', final);
	putc('U', final);
	putc('C', final);
	putc('I', final);
	putc('A', final);
	putc('N', final);
	putc('A', final);
	
	fclose(final);
}