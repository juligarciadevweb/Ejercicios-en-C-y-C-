//#include <stdio.h>

void cargaYSuma(int col, int fils, int bray[100][100], int luke[100])
{
    for (int j = 0; j < col; j++) //Primero leemos las columnas
    {
        luke[j] = 0;
        for (int i = 0; i < fils; i++) //Leemos las filas en la segunda iteracion al hacer la asignacion de coordenadas
        {
            printf("Bray [%d][%d] = ", i, j);
            scanf("%d", &bray[i][j]);
            luke[j] += bray[i][j];
        }
        printf("La suma de los elementos internos de la columna %d es %d\n", j, luke[j]);
    }
}

int main()
{
    int fils, col;
    int bray[100][100], luke[100];
    printf("Ingrese la cantidad de filas: ");
    scanf("%d", &fils);
    printf("Ingrese la cantidad de columnas: ");
    scanf("%d", &col);
    cargaYSuma(col, fils, bray, luke);
    return 0;
}

