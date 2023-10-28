#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 Diseña una estructura de datos para representar información de 
estudiantes de una escuela. Cada estudiante debe tener los siguientes atributos:
 
	número de estudiante 
	nombre completo
	edad 
	dirección 
	calificación promedio.

a) Define la estructura de datos para representar la información de un estudiante 
y organiza los campos en una estructura jerárquica.

b) Permite al usuario ingresar los datos de N estudiantes, 
incluyendo número de estudiante, nombre, edad, dirección y calificación promedio.

c) Muestra cuántos estudiantes tienen una calificación promedio superior a 8.

*/

struct registro
{
	int numero;
	char nameApp[30];
	int edad;
	char direccion[30];
	float prom;  		
};

main()
{
	int n;
	int cont = 0;
	registro reg, v[30];
	printf("\nIngrese la cantidad de alumnos: ");
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++)
	{
		printf("\nIngrese los datos del alumno: %d", i);
		printf("\nNumero: ");
		scanf("%d", &v[i].numero);
		_flushall();
		printf("\nIngrese el nombre y apellido: ");
		gets(v[i].nameApp);
		_flushall();
		printf("\nIngrese la edad: ");
		scanf("%d", &v[i].numero);
		_flushall();
		printf("\nIngrese la direccion: ");
		gets(v[i].direccion);
		_flushall();
		printf("\nIngrese el promedio: ");
		scanf("%f", &v[i].prom);
		if(v[i].prom > 8)
			cont++;
	}
	
	printf("\nLos promedios mayores a 8 son: %d",cont);
}