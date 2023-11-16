#include <stdio.h>
#include <stdlib.h>

/*
Se tiene un Arreglo Tridimensional de valores enteros, de orden MxNxP.
    a. Realizar la carga del Arreglo Tridimensional, por medio de una función.
    b. Mediante una función, Realizar la carga a un vector, que contendrá en 
	cada elemento la suma de los elementos de cada plano de la Arreglo Tridimensional. 
	(Nota: Tener en cuenta el orden que se deberá dar al vector en su definición).
    c. Mostrar el vector generado a través de una función sin tipo.
*/
void cargaYmuetra(int n, int m, int p, int vec[30], int mat[30][30][30])
{
	for(int i = 0; i < m; i++)	
	{
		int suma = 0; //La inicializamos en 0 como un contador
		for(int j = 0; j < n; j++)
		{
			for(int k = 0; k < p; k++)
			{
				printf("Ingrese un valor: ");
				scanf("%d", &mat[i][j][k]);
				suma += mat[i][j][k];
			}
		}
		vec[i] = suma; //Tiene los valores acumulados del arreglo tridimensional
	}
	
	printf("\nEl vector generado es: ");
	for(int i = 0; i < m; i++)
	{
		printf("%d- ", vec[i]);
	}
}

main()
{
	int vec[30];
	int mat[30][30][30];
	int m, n, p;
	
	printf("\nIngrese M: ");
	scanf("%d", &m);
	printf("\nIngrese N: ");
	scanf("%d", &n);
	printf("\nIngrese P: ");
	scanf("%d", &p);
	
	cargaYmuetra(n, m, p, vec, mat);
	
}
