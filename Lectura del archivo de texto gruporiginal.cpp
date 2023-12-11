#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// Realizar la lectura del archivo creado en el programa 1er practica archivos de texto

main()
{
	FILE *name; //le asigno otro identificador al archivo
	
	name = fopen("gruporiginal.txt", "r"); //abrimos en read para la lectura
	
	//verifico la existencia del archivo
	if(name == NULL) //siempre con el doble igual == para realizar la verificacion correctamente
	{
		printf("El archivo no existe: ");
		return 0;
	}else{
		while(!feof(name))
		{
			printf("%c", getc(name));
		}
	}
	fclose(name);
}
 