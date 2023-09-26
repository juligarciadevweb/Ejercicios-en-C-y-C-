/*

Dado un arreglo bidimensional de dimensiones PxF donde P=6 y F=8, que almacena valores de tipo float:
	
	a. A través de una función SIN TIPO, solicite al usuario que ingrese valores de tipo float para llenar la matriz.
	b. Haciendo uso de una función CON TIPO, determine el promedio de todos los valores almacenados en la matriz y muestre este resultado en la función principal main.
	c. Utilizando una función SIN TIPO, muestre los valores de la matriz en forma de tabla, resaltando las filas y columnas para facilitar la visualización.

*/

#include <stdio.h>
#include <time.h>

void cargar(float mat[100][100], int m, int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			printf("[%d] - [%d] = ", i, j);
            scanf("%f", &mat[i][j]);
		}
		printf("\n\n");
	}
}

float prom(float mat[100][100], int m, int n)
{
	float promedio = 0;
	float suma = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			suma = mat[i][j];
		}
	}
	return promedio = suma / (n * m);
}

main()
{
	int n; //Filas
	int m; //Columnas
	float mat[100][100]; //Matriz tipo flotante
	printf("\nIngrese la cantidad de filas: ");
	scanf("%d", &n);
	printf("\nIngrese la cantidad columnas: ");
	scanf("%d", &m);
	printf("\nIngresara valores del tipo flotante: \n");		
	cargar(mat, m, n);
	float prime = prom(mat, m, n);
	printf("\nEl promedio de los elementos internos: %0.2f", prime);
}