#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

/* Realizar el alta logica del archivo amigos.dat*/

struct fecha
{
	int dia, mes, anio;	
};

struct registro
{
	int edad;
	char carrera[30];
	char apeYnom[30]; 	
	fecha fec;
	bool borrado;
};

main()
{
	registro reg;
	FILE *arch;
	int n;
	printf("Ingrese la cantidad de amigos: ");
	scanf("%d", &n);
	
	arch = fopen("amigos.dat", "w+b");
	
	for(int i = 0; i < n; i++)
	{
		_flushall();
		printf("\nIngrese el apellido y nombre: ");
		gets(reg.apeYnom);
		_flushall();
		printf("\nIngrese la edad: ");
		scanf("%d", &reg.edad);
		_flushall();
		printf("\nIngrese la carrera: ");
		gets(reg.carrera);
		_flushall();
		printf("\nIngrese el anio de nacimiento: ");
		scanf("%d", &reg.fec.anio);
		printf("\nIngrese el mes de nacimiento: ");
		scanf("%d", &reg.fec.mes);
		printf("\nIngrese el dia de nacimiento: ");
		scanf("%d", &reg.fec.dia);
		reg.borrado = false;
		fwrite(&reg, sizeof(registro), 1, arch);
	}
	fclose(arch);
}