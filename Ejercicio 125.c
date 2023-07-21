//Realizar una resta de 4 vectores

int main()
{

    int n;
    printf("Ingrese la cantidad de elementos de los vectores: ");
    scanf("%d", &n);
    
    //Definicion de los vectores
    int A[n];
    int B[n];
    int C[n];
    int D[n];
    int R[n];

    //Lectura y suma vectorial
    for (int i = 0; i < n; i++)
    {
        printf("\n A[%d] = ",i);
        scanf("%d", &A[i]);
        printf("\n B[%d] = ",i);
        scanf("%d", &B[i]);
        printf("\n C[%d] = ",i);
        scanf("%d", &C[i]);
        printf("\n D[%d] = ",i);
        scanf("%d", &D[i]);
        R[i] = A[i] - B[i] - C[i] - D[i];
    }
    
    //Impresion de la resta vectorial
    printf("Los valores de la resta son: \n");
    for (int i = 0; i < n; i++)
    {
        printf("\n R[%d] = %d", i, R[i]);
    }
    
    return 0;
}
