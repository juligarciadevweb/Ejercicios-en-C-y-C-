/*
Se tiene una matriz A de orden M*N de números enteros
	a. Realizar la carga de la matriz A, puede hacerse de manera aleatoria. Ver ejemplo al final del TP
	b. Obtener la Matriz B que es la matriz traspuesta o transpuesta de A t.
	c. Mostrar la matriz A y la Matriz B
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//Funcion para la carga manual
void cargar(int mat[100][100], int m, int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			printf("[%d] - [%d] = ", i, j);
            scanf("%d", &mat[i][j]);
		}
		printf("\n\n");
	}
}

//Funcion para trasponer la matriz segun la elecccion del usuario
void traspuesta(int mat[100][100], int matB[100][100], int m, int n)
{
	printf("\n\n");
	printf("\nLa traspuesta es: ");
	for(int j = 0; j < m; j++)
	{
		printf("\n\n");
		for(int i = 0; i < n; i++)
		{
			matB[i][j] = mat[i][j];	
			printf("\n[%d] - [%d] = [%d]", i, j, matB[i][j]);	
		}
	}	
}

void rnd(int mat[100][100],int n, int m, int minV, int maxV)
{
	srand(time(NULL)); //Dejo el comando interno 'time' en valor nulo

    // Llena la matriz con valores aleatorios en el rango [minValor, maxValor]
    for (int i = 0; i < n; i++) 
	{
        for (int j = 0; j < m; j++) 
		{
            mat[i][j] = minV + rand() % (maxV - minV + 1);
        }
    }
}

void mostrar(int mat[100][100], int n, int m, int matB[100][100])
{
	printf("\n\n");
	printf("\nLa primera matriz es: ");
	for(int j = 0; j < m; j++)
	{
		printf("\n\n");
		for(int i = 0; i < n; i++)
		{	
			printf("\n[%d] - [%d] = [%d]", i, j, mat[i][j]);	
		}
	}
	printf("\n\n");
	printf("\nLa matriz B es: ");
	for(int j = 0; j < m; j++)
	{
		printf("\n\n");
		for(int i = 0; i < n; i++)
		{	
			printf("\n[%d] - [%d] = [%d]", i, j, matB[i][j]);	
		}
	}
}

int main()
{
	int n; //filas
	int m; //columnas
	int x; //Seleccion del usuario para la carga
	int minV = 1; //Valor minimo del elemento de la matriz aleatoria
    int maxV = 100; //Valor maximo del elemento de la matriz aleatoria
	int mat[100][100], matB[100][100];
	printf("\nIngrese la cantidad de filas: ");
	scanf("%d", &n);
	printf("\nIngrese la cantidad columnas: ");
	scanf("%d", &m);
	
	printf("\nSeleccione el metodo de carga de la matriz: (1 para carga manual y 2 para carga aleatoria) \n");
	scanf("%d", &x);
	switch(x)
		{
			case 1:
			printf("\nUsted cargara la matriz: ");
			cargar(mat, m, n);
			break;
		
			default:
			rnd(mat, n, m, minV, maxV);		
			break;		
		}
	//Llamada a la funcion para trasponer la matriz segun la seleccion del usuario
	traspuesta(mat, matB, m, n);
	mostrar(mat, n, m, matB);
}