/*
Dado una matriz de tamaño MxN con M=5 y N=4 cuyos elementos son enteros:

	a. Mediante una función SIN TIPO, llene la matriz con valores enteros aleatorios 
	en el rango de 1 a 100.
	
	b. A través de una función CON TIPO, calcule y muestre la suma de todos 
	los elementos de la matriz en la función principal main.
	
	c. Utilizando una función SIN TIPO, imprima los elementos de la matriz en formato de tabla, 
	mostrando filas y columnas.
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void rnd(int mat[100][100], int n, int m, int minV, int maxV)
{
    // Llena la matriz con valores aleatorios en el rango [minValor, maxValor]
    for(int i = 0; i < m; i++)
	{
        for(int j = 0; j < n; j++)
		{
            mat[i][j] = rand() % (maxV-minV) + minV;
        }
    }
}

void sumaInternos(int mat[100][100], int n, int m)
{
	int suma = 0;
	for (int i = 0; i < n; i++) 
	{
        for (int j = 0; j < m; j++) 
		{
            suma += mat[i][j];
        }
    }
    printf("\nLa suma de los elementos interos de la matriz es: %d", suma);
}

mostrarMat(int mat[100][100], int n, int m)
{
	for (int i = 0; i < n; i++) 
	{
		printf("\n");
        for (int j = 0; j < m; j++) 
		{
            printf("\n[%d] [%d] = [%d]", i, j, mat[i][j]);
        }
        printf("\n");
    }
}

main()
{
	int mat[100][100];
	int n;
	int m;
	int minV, maxV;
	printf("Ingrese la cantidad de filas: ");
	scanf("%d", &n);
	printf("Ingrese la cantidad de columnas: ");
	scanf("%d", &m);
	rnd(mat, n, m, minV, maxV);
	printf("\n\n");
	sumaInternos(mat, n, m);
	printf("\n\n");
	mostrarMat(mat, n, m); 
}
