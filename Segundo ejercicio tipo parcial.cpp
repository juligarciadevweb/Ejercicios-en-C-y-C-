#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

Un médico registra la información de sus pacientes en una estructura que posee los siguientes campos: 
Nombre 
Edad
Teléfono 
Fecha de la última visita (estructura anidada). 

Se pide: 

a) Ingresar la información en un vector de registros. 
b) Mediante una función con tipo calcule el promedio de edades de los pacientes..

*/

struct fecha
{
	int dia, mes, anio;	
};


struct registro
{
	char name[30];
	int edad;
	int tel;
	fecha fec;		
};

main()
{
	registro vec[30];
	int n;
	int suma = 0;
	float prom = 0.00;
	printf("Ingrese la cantidad de pacientes a cargar: ");
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++)
	{
		_flushall();
		printf("\nIngrese el nombre del paciente: ");
		gets(vec[i].name);
		_flushall();
		printf("\nIngrese la edad del paciente: ");
		scanf("%d", &vec[i].edad);
		suma+=vec[i].edad;
		_flushall();
		printf("\nIngrese el telefono del paciente: ");	
		scanf("%d", &vec[i].tel);
		_flushall();
		printf("\nIngrese el dia de su ultima visita: ");
		scanf("%d", &vec[i].fec.dia);
		_flushall();
		printf("\nIngrese el mes de su ultima visita: ");
		scanf("%d", &vec[i].fec.mes);
		printf("\nIngrese el anio de su ultima visita: ");
		scanf("%d", &vec[i].fec.anio);
	}
	
	prom = (float) suma / n;
	
	printf("El promedio de las edades de los pacientes es %0.2f", prom);
	
}