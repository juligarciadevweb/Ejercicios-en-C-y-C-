#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

/*

En un comercio, se lleva un registro de las ventas semanales de n empleados, donde cada empleado tiene un registro de sus ventas durante los 7 días de la semana. Desarrolla un programa en C que realice las siguientes tareas:

Cargar la matriz de ventas: función que permita cargar las ventas semanales de cada empleado en una matriz de tamaño N*5. 
El usuario debe ingresar las ventas diarias para cada empleado.

Identificar empleado con menor recaudación: Implementa una función que, dada la matriz de ventas, encuentre e imprima el índice del empleado que tuvo la mayor recaudación total durante la semana. Muestra también la recaudación total de ese empleado.

En la función main, solicita al usuario el número de empleados (N), carga la matriz de ventas llamando a la función correspondiente y utiliza la función para identificar al empleado con la mayor recaudación. 
Muestra en pantalla el índice del empleado y su recaudación total.

*/

void carga(int mat, int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			printf("Dia: %d", j+1);
			scanf("%d", &mat[i][j]);
		}
	}
}

int may(int mat[30][30], int n, int e)
{
	int ventMay = 0;
	int inMay = 0; // indice del mayor
	int totalVentas = 0; // acumulador
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < e; j++)
		{
			totalVentas += mat[i][j];
		}
		
		if(totalVentas < ventMay)
		{
			ventMay = totalVentas; 
			inMay = i;
		}
	}
}