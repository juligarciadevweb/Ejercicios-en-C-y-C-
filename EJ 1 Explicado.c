/*

Dado una matriz de MxN donde M=4 y N=3 cuyo contenido son números
reales.
    
    a. Haciendo uso de una función SIN TIPO, Ingrese elementos a la matriz.
    
    b. Haciendo uso de una función CON TIPO, encuentre el mayor y menor elemento de la matriz. Los
valores se mostraran en la función principal main.
    
    c. Usando una función SIN TIPO, liste los elementos de la matriz separados por un guion medio de
manera que se visualicen sus datos en forma de matriz(filas y columnas).

*/

//#include <stdio.h>

void cargarMatriz(int n, int m, int mat[100][100]) 
{
    // Ciclo i por filas
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            printf(" [%d] [%d] = ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}

void mayorYmenMtr(int n, int m, int mat[100][100]) 
{
    int menMTR = mat[0][0];
    int mayMTR = mat[0][0];

    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            if (mat[i][j] > mayMTR) 
            {
                mayMTR = mat[i][j];
            }

            if (mat[i][j] < menMTR) 
            {
                menMTR = mat[i][j];
            }
        }
    }

    printf("\nEl elemento menor de la matriz es: %d", menMTR);
    printf("\nEl elemento mayor de la matriz es: %d", mayMTR);
}

void mostrar(int m, int n, int mat[100][100]) 
{
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            printf("\n[%d]  [%d] =  %d", i, j, mat[i][j]);
        }
        printf("\n\n");
    }
}

int main(int argc, char const *argv[]) 
{
    int m = 4; // Numero de filas
    int n = 3; // Numero de columnas
    int mat[100][100];

    cargarMatriz(n, m, mat);
    mayorYmenMtr(n, m, mat);
    mostrar(m, n, mat);

    return 0;
}