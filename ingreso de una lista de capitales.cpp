#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

// Realizar la carga del archivo capitales 

main()
{
	FILE *name; //le asigno otro identificador al archivo
	int n;
	char capitals[100];
	printf("Ingrese la cantidad de capitales a cargar: ");
	scanf("%d", &n);
	
	name = fopen("world.txt", "w"); //abrimos en read para la lectura
	for(int i = 0; i < n; i++)
	{
		gets(capitals);
		if(i < n - 1) //Es para ser especificos en la carga del archivo
			fprintf(name, strcat(capitals, "\n")); //Concatenara todas las capitales con 
		else
			fprintf(name, capitals);
	}
	
	fclose(name);

	printf("Las capitales ingresadas son: \n");
	name = fopen("world.txt", "r");
	while(!feof(name))
	{
		fgets(capitals, 100, name);
		printf("%s", capitals);
	}
	
	fclose(name);
}