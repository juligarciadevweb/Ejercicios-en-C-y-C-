/*
Dado un de MxN donde M=4 y N=3 cuyo contenido son números
reales.
a. Haciendo uso de una función SIN TIPO, Ingrese elementos a la matriz.
b. Haciendo uso de una función CON TIPO, encuentre el mayor y menor elemento de la matriz. Los
valores se mostraran en la función principal main.
c. Usando una función SIN TIPO, liste los elementos de la matriz separados por un guion medio de
manera que se visualicen sus datos en forma de matriz(filas y columnas).
*/

#include <stdio.h>

void ingreso(int m, int n, int mat[100][100])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("[%d] [%d] = ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}

void mayMen(int m, int n, int mat[100][100], int *may, int *men)
{
    *men = mat[0][0];
    *may = mat[0][0];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // Encontrar el elemento menor
            if (mat[i][j] < *men)
            {
                *men = mat[i][j];
            }

            // Encontrar el elemento mayor
            if (mat[i][j] > *may)
            {
                *may = mat[i][j];
            }
        }
    }
}

void mostrar(int m, int n, int mat[100][100])
{
    printf("\nLa matriz ingresada es: ");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("\n[%d]  [%d]  =  %d", i, j, mat[i][j]);
        }
        printf("\n\n");
    }
}

int main(int argc, char const *argv[])
{
    int m = 4; // Columnas
    int n = 3; // Filas
    int mat[100][100];
    int men, may;

    ingreso(m, n, mat);
    mayMen(m, n, mat, &may, &men); // Corregí el orden de men y may
    printf("\nEl elemento menor es %d", men);
    printf("\nEl elemento mayor es %d", may);
	
    mostrar(m, n, mat);
    return 0;
}
