/*
04) 
    Se tiene una matriz A de orden M*N de números enteros
        a. Realizar la carga de la matriz A, puede hacerse de manera aleatoria. Ver ejemplo al final del TP
        b. Obtener la Matriz B que es la matriz traspuesta o transpuesta de A t
        c. Mostrar la matriz A y la Matriz B
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void rnd(int matA[100][100],int n, int m)
{
	for(int i = 0 ; i<n ;i++)
	{
		for(int j = 0; j < m; j++)
        {
			matA[i][j]=1+rand()%100;
		}
	}
}

void traspuesta(int matA[100][100], int matB[100][100], int n, int m)
{
	for(int j = 0;j < m;j++)
	{
		printf("\n\n");
		for(int i = 0 ;i < n; i++)
		{
			matB[i][j]=matA[i][j];
			printf("\tB-[%d] [%d] - %d",i,j,matB[i][j]);
		}
	}

	printf("\n\nMatriz A:\n\n");
	for(int i = 0 ; i < n ; i++)
	{
		printf("\n\n");
		for(int j = 0;j < m;j++)
		{
			printf("\tA - [%d] [%d] - %d",i,j,matA[i][j]);
		}
    }

}

int main()
{
    int n, m;
    int matA[100][100], matB[100][100];
    printf("Ingrese el número de filas: ");
    scanf("%d", &m);
    printf("\nIngrese el número de columnas: ");
    scanf("%d", &n);
    rnd(matA, n, m);
    traspuesta(matA, matB, n, m);
    return 0;
}