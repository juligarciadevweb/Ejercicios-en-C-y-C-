/*

Ingresar los elementos de una matriz donde sus elementos son números enteros. El orden de la
matriz es MxN.

    a. Realizar la carga de la matriz por medio de una función sin tipo. Al ingresar un valor negativo o
    cero mostrar mensaje de error y volver a ingresar el valor para dicha celda.

    b. Mostrar la matriz por medio de una función.

    c. Cambiar un elemento de la matriz, de una posición ingresada por teclado, por el valor cero.
    Utilizar la función realizada en el punto b para mostrar como quedo.
    
    d. Mostrar los elementos de una fila “X”, ingresando el número de fila, por teclado.

    e. Mostrar los elementos de una Columna “Y”, ingresando el número de columna por teclado.

*/

#include <stdio.h>


//Hago una carga optimizada, para evitar errores uso el do while
void cargarMatriz(int n, int m, int mat[n][m]) 
{
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            do 
            {
                printf("Ingrese el elemento en la posición (%d, %d): ", i, j);
                scanf("%d", &mat[i][j]);

                if (mat[i][j] <= 0) 
                {
                    printf("Error: El valor debe ser mayor que cero. Intente de nuevo.\n");
                }
                //Nos aseguramos que la matriz sea positiva
            } while (mat[i][j] <= 0);
        }
    }
}

//Hago una muestra clasica de la matriz
void mostrarMatr(int n, int m, int mat[n][m]) 
{
    printf("\nLa matriz cargada es:\n");
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            printf("[%d]  [%d] = %d\t", i, j, mat[i][j]);
        }
        printf("\n\n");
    }
}

void change(int mat[100][100], int m, int n) 
{
    //Definicion de variables esenciales para el cambio, incluyendo el nuevo valor 
    int fil, col, newValue;

    //Pedido de coordenadas del elemento a cambiar
    printf("\nIngrese la fila del elemento a cambiar: ");
    scanf("%d", &fil);
    printf("\nIngrese la columna del elemento a cambiar: ");
    scanf("%d", &col);

    //Uso de triple compuerta logica AND para corroborar las coordenadas exactas
    if (fil >= 0 && fil < m && col >= 0 && col < n) //Uso de una triple compuerta logica 
    {
        printf("\nIngrese el nuevo valor para la posición (%d, %d): ", fil, col); //Concatenacion de las coordenadas para un mejor visualizacion
        scanf("%d", &newValue); //Lectura del nuevo valor
        mat[fil][col] = newValue; //Hago una reasignacion del valor para reemplazarlo en la matriz
    } else 
    {
        printf("Error: La posición ingresada está fuera de los límites de la matriz.\n");
    } 
}

void mostrarFila(int mat[100][100], int m, int n, int filaX) 
{
    if (filaX >= 0 && filaX < m) 
    {
        printf("\nElementos de la fila %d:\n", filaX);
        for (int j = 0; j < n; j++) 
        {
            printf("%d\t", mat[filaX][j]);
        }
        printf("\n\n");
    } else {
        printf("Error: El número de fila ingresado está fuera de los límites de la matriz.\n");
    }
}

void mostrarColumna(int mat[100][100], int m, int n, int columnaX) 
{
    if (columnaX >= 0 && columnaX < n) 
    {
        printf("\nElementos de la columna %d:\n", columnaX);
        for (int i = 0; i < m; i++) 
        {
            printf("%d\n", mat[i][columnaX]);
            printf("\n\n");
        }
    } else {
        printf("\nError: El número de columna ingresado está fuera de los límites de la matriz.\n");
    }
}

int main() 
{
    int n, m;
    printf("Ingrese el número de filas: ");
    scanf("%d", &m);

    printf("\nIngrese el número de columnas: ");
    scanf("%d", &n);

    int mat[n][m]; 
    cargarMatriz(n, m, mat);
    mostrarMatr(n, m, mat);
    change(mat, m, n);

    int filaX, columnaX;

    printf("Ingrese la fila a buscar: ");
    scanf("%d", &filaX);
    mostrarFila(mat, m, n, filaX);

    printf("Ingrese la columna a buscar: ");
    scanf("%d", &columnaX);
    mostrarColumna(mat, m, n, columnaX);

    return 0;
}
