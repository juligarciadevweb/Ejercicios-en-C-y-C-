
/*
Se dispone de un arreglo tridimensional de dimensiones MxNxP que almacena números reales.

a. Utilizando una función SIN TIPO, permita al usuario ingresar valores para llenar el arreglo tridimensional.

b. Mediante una función CON TIPO, encuentre el valor más pequeño dentro del arreglo tridimensional y devuélvalo como resultado.

c. Dentro de la misma funcion determine si el valor mínimo encontrado en el paso b) es un número par o impar. Muestre el resultado en la función principal main.
*/

#include <stdio.h>
#include <stdlib.h>
#define V 5 

void carga(int mat[V][V][V], int n, int m, int p)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			for(int k = 0; k < p; k++)
			{
				printf("\n[%d] - [%d] - [%d] =  ",i,j,k);
				scanf("%d", &mat[i][j][k]);			
			}
		}
	}
}

void encMen(int mat[V][V][V], int n, int m, int p)
{
	int menMTR = mat[0][0][0];

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			for(int k = 0; k < p; k++)
			{
				if (mat[i][j][k] < menMTR) 
           		{
               		menMTR = mat[i][j][k];
           		}					
			}
		}
	}
	
	if(menMTR % 2 == 0)
		printf("El menor elemento si es par");
		else printf("El menor elemento no es par");
	
}

main()
{
	int n = 0;	 //Cantidad de filas
	int m = 0; 	//Cantidad de columnas
	int p = 0; //Cantidad de planos
	int mat[V][V][V]; //Arreglo tridimensional
	printf("\nIngrese la cantidad de filas: ");
	scanf("%d", &n);
	printf("\nIngrese el numero de columnas: ");
	scanf("%d", &m);
	printf("\nIngrese la cantidad de planos: ");
	scanf("%d", &p);
	carga(mat, n, m, p);
	encMen(mat, n, m, p);
}