                            //Matrices en C

//Lectura e impresion por filas
int main(int argc, char const *argv[])
{
    int n; // Cantidad de columnas
    int m; // Cantidad de filas
    int i; // Subíndice de las filas de la matriz.
    int j; // Subíndice de las columnas de la matriz.
    int A[100][100]; // A[i][j]: cada uno de los elementos de la matriz
    
    // Solicitar al usuario la cantidad de filas y columnas
    printf("Ingrese la cantidad de filas de la matriz: ");
    scanf("%d", &m); 
    printf("Ingrese la cantidad de columnas de la matriz: ");
    scanf("%d", &n);

    // Ciclo i por filas
    for (i = 0; i < m; i++) //Iteracion en el numero de filas
    {
        for (j = 0; j < n; j++) 
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
        
    // Imprimir la matriz
    printf("Matriz ingresada: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}

