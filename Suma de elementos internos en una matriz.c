//Cargar una matriz y sumar sus elementos

int main(int argc, char const *argv[])
{
    int suma = 0;
    int f, c, mat[100][100]; //F para filas y c para columnas

    printf("Ingrese la cantidad de filas: ");
    scanf("%d", &f);
    printf("Ingrese la cantidad de columnas: ");
    scanf("%d", &c);

    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; i++)
        {
            printf("\nIngrese mat[%d][%d] = ", i,j);
            scanf("%d", mat[i][j]);
            suma+=mat[i][j];
        }
    }
    
    printf("La suma de los elementos internos es: %d", suma);
    return 0;
}
