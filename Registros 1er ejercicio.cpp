#include <stdio.h>
#include <string.h>

/*

	Un supermercado guarda la configuracion de sus productos en un registro
	que contiene los siguientes campos

	codigo
	descripcion 
	precio

*/

struct registro
{
	int codigo;
	char descri[30];
	float precio;	
};

main()
{
	registro reg;
	
	printf("\nCodigo: ");
	scanf("%d", &reg.codigo);
	
	_flushall();
	
	printf("\nDescripcion: ");
	gets(reg.descri); //Si uso gets no hace falta el typedef porque el mismo lee tambien los espacios en blanco
	
	printf("\nPrecio: ");
	scanf("%f", &reg.precio);
	
	printf("\nLos datos ingresados son: \n\n");
	
	printf("Codigo: %d", reg.codigo);
	printf("\nDescripcion: ");
	puts(reg.descri);
	
	printf("Precio: %2f", reg.precio);
}