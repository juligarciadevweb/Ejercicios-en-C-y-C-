#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*Escribir una lista de nombres en un archivo de texto
	Juan
	Diego
	España
	Deraco
	Rafael
	Mauricio
*/

main()
{
	FILE *fp; //Referencio el archivo
	fp = fopen("gruporiginal.txt", "w");
	
	fprintf(fp, "Juan \n");
	fprintf(fp, "Diego \n");
	fprintf(fp, "España \n");
	fprintf(fp, "Deraco \n");
	fprintf(fp, "Rafael \n");
	fprintf(fp, "Mauricio \n");
	
	fclose(fp);

	printf("Se ha creado el archivo gruporiginal.txt \n");
}