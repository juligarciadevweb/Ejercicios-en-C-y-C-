// Multiplicación de un escalar por una matriz
int main(int argc, char const *argv[])
{
    int i, j, n, m, k;
    int a[10][10], c[10][10];

    printf("Ingrese la cantidad de filas: ");
    scanf("%d", &m); // M para filas
    printf("Ingrese la cantidad de columnas: ");
    scanf("%d", &n); // N para columnas
    printf("Ingrese el valor del escalar: ");
    scanf("%d", &k);

    // Llenar matriz 'a' y calcular matriz 'c'
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Ingrese el elemento a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
            c[i][j] = k * a[i][j];
        }
    }

    // Mostrar matriz 'c' de manera legible
    printf("Matriz resultante 'c':\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", c[i][j]); // Alineación de elementos
        }
        printf("\n"); // Nueva línea para la siguiente fila
    }

    return 0;
}
