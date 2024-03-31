#include <stdio.h>
#include <stdlib.h>
/*
	Enunciado:

Cargar un vector de N elementos que contengan las notas de un curso. 
Por medio de un menu indicar:

a. Nota mas alta y mas baja.
b. Promedio de notas.
c. Cantidad de notas superiores al promedio.
d. Cantidad de alumnos aprobados y desaprobados. 
Se aprueba desde 7.

*/

main()
{
	int vec[50];
	int n;
	int notMay = 0, notMen = 10;
	int sum = 0, notSup = 0, ap = 0, des = 0;
	
	printf("Ingrese la cantidad de notas: ");
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++)
		{
			printf("Ingrese la nota %d: ", i);
			scanf("%d", &vec[i]);
			
			if(vec[i] >= 1 && vec[i] <= 10)
			{				
				sum += vec[i]; //Sumara el total de las notas
				if(vec[i] >= 7)
					ap++;
				else
					des++;
				
				if(vec[i] > notMay)
					notMay = vec[i];
			
				if(vec[i] < notMen)
					notMen = vec[i];
			} else{
				printf("ERROR, ingrese una nota entre 1 y 10: ");
				scanf("%d", &vec[i]);
			}
		}
	float prom = float(sum / n);
	
	for(int i = 0; i < n; i++)
		if(vec[i] > prom)
			notSup++;
	
	printf("\nLa cantidad de desaprobados es: %d y los aprobados son: %d", des, ap);
	printf("\nLa nota mas alta es: %d y la mas baja es: %d", notMay, notMen);
	
	if(prom > 7)
		printf("\nEl promedio es %0.2f, es un buen curso", prom);
	else{
		printf("\nEl curso es un asco, promedio de %0.2f", prom);
	}	
}