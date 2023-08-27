#include <stdio.h>

int main()
{
    int bray = 0; // Se le hará una reasignación si encontramos el elemento
    int i, j, fils, col, x;
    int famy[100][100];

    printf("\nIngrese la cantidad de filas: ");
    scanf("%d", &fils);
    printf("\nIngrese la cantidad de columnas: ");
    scanf("%d", &col);

    printf("\nIngrese los elementos de la matriz\n");
    for (i = 0; i < fils; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("\n famy[%d][%d] = ", i, j);
            scanf("%d", &famy[i][j]);
        }
    }

    printf("Ingrese el elemento a buscar: ");
    scanf("%d", &x);

    for (i = 0; i < fils; i++)
    {
        for (j = 0; j < col; j++)  // Corregir aquí
        {
            if (x == famy[i][j])
            {
                bray = 1;
            }
        }
    }

    if (bray == 1)  // Corregir aquí
    {
        printf("Sí se encontró el elemento en la matriz");
    }
    else
    {
        printf("\nNo se encontró el elemento en la matriz");
    }

    return 0;
}
