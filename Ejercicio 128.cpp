/*

Se tiene una Arreglo Multidimensional de orden MxNxP con valores reales:

a. Realizar la carga del Arreglo Multidimensional, por medio de una función SIN TIPO, 
en caso de ingresar un valor negativo volver a pedir
b. Por medio de una función sin tipo, encontrar el menor y el mayor valor dentro del Arreglo Multidimensional.
c. Por medio de una función sin tipo, determinar si el menor valor encontrado es o no par

*/

#define MAX 50 //Defino un valor inicial para las coordenadas del arreglo
#include <stdio.h>

//Funcion para la carga del arreglo tridimensional
void cargaTriple(int mat[MAX][MAX][MAX], int n, int m, int p)
{
	for(int i = 0;i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			for(int k = 0; k < p; k++) 
			{
				printf("\n[%d] - [%d] - [%d] =  ", i, j, k);	
				scanf("%d", &mat[i][j][k]);
				if(mat[i][j][j] < 0)
				{
					printf("ERROR, ingreso un valor negativo, ingrese un positivo: ");
					scanf("%d", &mat[i][j][k]);
				}
			}	
		}
	}
}

//Obtenemos el valor minimo y verificamos si es par dentro de la misma funcion
void menValue(int mat[MAX][MAX][MAX], int n, int m, int g, int *men, int *max)
{
	*men = mat[0][0][0]; //Inicializacion de la variable con el valor menor
	*max = mat[0][0][0]; //Inicializacion de la variable para el valor mayor
	for(int i = 0;i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			for(int k = 0; k < g; k++)
			{
				if(*men > mat[i][j][k])
					*men = mat[i][j][k];			
				if(*max < mat[i][j][k])
					*max = mat[i][j][k];			
			}	
		}
	}
}
	
int main()
{
	int n, m, g;
	int men = 0, max = 0; 
	int mat[MAX][MAX][MAX]; //Declaracion de la matriz tridimensional
	printf("Ingrese la cantidad de filas: ");
	scanf("%d", &n);
	printf("Ingrese la cantidad de columnas: ");
	scanf("%d", &m);
	printf("Ingrese la cantidad de planos: ");
	scanf("%d", &g);
	cargaTriple(mat, n, m, g);
	menValue(mat, n, m, g, &men, &max);
	
	if(men % 2 == 0 && max % 2 == 0)
		printf("\nTanto el menor como el mayor valor son pares");
		
	return 0;
}

