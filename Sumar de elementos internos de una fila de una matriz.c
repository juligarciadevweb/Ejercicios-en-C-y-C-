int main(int argc, char const *argv[])
{
    int elem = 0; //Acumulador de los valores internos
    int fils, col, i = 0;
    int bray[100][100], brodie[100];
    printf("Ingrese la cantidad de filas: ");
    scanf("%d", &fils);
    printf("Ingrese la cantidad de columnas: ");
    scanf("%d", &col);

    for (i = 0; i < fils; i++)
    {
        brodie[i] = 0; //Uso ese vector como un metodo interno para sumar los valores
        for (int j = 0; j < col; j++)
        {
            printf("\n Bray[%d][%d] = ",i,j);
            scanf("%d", &bray[i][j]);
            brodie[i] += bray[i][j];
        }
        printf("\nLa suma de los elementos internos de la fila %d es: %d", i, brodie[i]);
    }
    
    return 0;
}
