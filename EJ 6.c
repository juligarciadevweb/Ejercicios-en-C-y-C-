/*
Se tiene una Arreglo Multidimensional de orden MxNxP con valores reales.

    a. Realizar la carga del Arreglo Multidimensional, por medio de una función SIN TIPO.
    b. Por medio de una función CON TIPO, encontrar el menor valor dentro del Arreglo Multidimensional.
    c. Por medio de una función CON TIPO, determinar si el menor valor encontrado es o no par
*/

#include <stdio.h>
#include <stdlib.h>

void cargarMatriz(int n,int m,int mat[100][100])
{
    printf("Ingrese los elementos de la matriz: ");
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            printf("\n[%d] [%d] = ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}

void mayorYmenMtr(int n, int m, int mat[100][100], int *menMt, int *parOimpar) 
{
    *menMt = mat[0][0];
    *parOimpar = 0; 

    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            if (mat[i][j] < *menMt) 
            {
                *menMt = mat[i][j];
                if (mat[i][j] % 2 == 0)
                {
                    *parOimpar = 0;
                }
                else
                {
                    *parOimpar = 1;
                }
            }
        }
    }
    
    printf("\nEl elemento menor de la matriz es: %d\n", *menMt);
    if (*parOimpar == 0) 
    {
        printf("El elemento menor es par.\n");
    } else 
    {
        printf("El elemento menor es impar.\n");
    }
}


int main(int argc, char const *argv[])
{
    int n, m;
    int mat[100][100]; 
    int menMt = 0;
    int parOimpar;
    printf("Ingrese el número de filas: ");
    scanf("%d", &m);
    printf("\nIngrese el número de columnas: ");
    scanf("%d", &n);
    cargarMatriz(n, m, mat);
    mayorYmenMtr(n, m, mat, menMt, parOimpar);
    return 0;
}


