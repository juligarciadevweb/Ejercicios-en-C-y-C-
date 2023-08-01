//Multiplicar un escalar por un vector

void carga(int n, int vec[100], int vecB[100], int e)
{
    for (size_t i = 0; i < n; i++)
    {
        printf("Ingrese el valor: ");
        scanf("%d", &vec[i]);
        vecB[i] = vec[i] * e;
    }

    for (int i = 0; i < n; i++)
    {
        printf("\n b[%d] = %d", i, vecB[i]);
    }
}

int main(int argc, char const *argv[])
{
    int vec[100], vecB[100];
    int n, e;
    printf("Ingrese la cantidad de valores que tiene el vector: ");
    scanf("%d", &n);
    printf("Ingrese el escalar: ");
    scanf("%d", &e);
    carga(n, vec, vecB, e);
    return 0;
}
