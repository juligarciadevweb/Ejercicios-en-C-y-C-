#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

/*
	En un comercio se registra la venta de n empleados durante 
	los 7 dias de la semana en una matriz en una matriz de orden N*7
	
	Realizar la carga de la matriz en una funcion con tipo 
	
	Mostrar el indice del empleado con mayor recaudacion en el main
	(usas una funcion con tipo en este caso)

*/


void cargarMatriz(int ventas[30][30], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Ingrese las ventas del empleado %d para cada dia de la semana:\n", i + 1);
        for (int j = 0; j < 7; j++)
        {
            printf("Dia %d: ", j + 1);
            scanf("%d", &ventas[i][j]);
        }
    }
}

int empleadoConMayorRecaudacion(int ventas[30][30], int n)
{
    int indiceMax = 0;
    int maxRecaudacion = 0;

    for (int i = 0; i < n; i++)
    {
        int totalVentas = 0;
        for (int j = 0; j < 7; j++)
        {
            totalVentas += ventas[i][j];
        }

        if (totalVentas > maxRecaudacion)
        {
            maxRecaudacion = totalVentas;
            indiceMax = i;
        }
    }

    return indiceMax;
}

int main()
{
    int ventas[30][30];
    int n;

    printf("Ingrese el número de empleados: ");
    scanf("%d", &n);

    cargarMatriz(ventas, n);

    int indiceEmpleadoMax = empleadoConMayorRecaudacion(ventas, n);

    printf("\nEl empleado con mayor recaudación es el empleado %d.\n", indiceEmpleadoMax + 1);

    return 0;
}