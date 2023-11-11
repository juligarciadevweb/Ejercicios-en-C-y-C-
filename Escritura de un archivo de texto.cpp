#include <stdio.h>
#include <conio.h>

main()
{
	FILE *fp; //Referenciamos la variable de acceso al archivo

	//Abrimos el archivo para trabajarlo
	fp = fopen("nombres.txt", "w"); // La W es para crear un nuevo archivo, si ya existe se pierden los datos
	
	//Verificacion de la existencia del archivo
	if(fp == NULL)
	{
		printf("\nError al abrir el archivo: \n");
		exit(1);
	}
	
	//Contenido del archivo, escribo dentro del archivo
	fprintf(fp, "Juan \n");
 	fprintf(fp, "Diego \n");
 	fprintf(fp, "Agustin \n");
 	fprintf(fp, "Julian \n");
 	fprintf(fp, "Belen \n");
 	fprintf(fp, "Sol \n");
 	

	fclose(fp); /* Cerrar el archivo antes de terminar el programa */

	printf("Se ha creado el archivo: nombres.txt \n");
}
