/*
Se tiene dos vectores de números enteros. Ambos vectores son de igual tamaño. :
a. Haciendo uso de una función realizar el llenado de dos de los vectores.
b. Haciendo uso de una función, Sumar los vectores en un tercer vector llamado suma.
c. Obtener el promedio de los elementos del vector suma.
d. Determinar cuál es el mayor valor del vector suma.
*/

void carga(int n,int vecA[100],int vecB[100])
{
    for (int i = 0; i < n; i++)
    {
        printf("\nIngrese vecA[%d] = ",i);
        scanf("%d", &vecA[i]);
        printf("\nIngrese vecB[%d] = ",i);
        scanf("%d", &vecB[i]);
    }
}

void suma(int n, int vecA[100], int vecB[100], int vecS[100])
{
    int may = 0;
    int sumValue = 0;
    float prom = 0;
    for (int i = 0; i < n; i++)
    {
        vecS[i] = vecA[i] + vecB[i];
        sumValue += vecS[i];
    }
    prom = sumValue / n;

    for (int i = 0; i < n; i++)
    {
        if (vecS[i] > may)
        {
            may = vecS[i];
        }        
    }
    
    printf("\nEl valor mayor del vector suma es %d", may);
    printf("\nEl promedio de los valores del vector suma es %0.2f", prom);
}


int main(int argc, char const *argv[])
{
    int n;
    int vecA[100], vecB[100], vecS[100];
    printf("Ingrese la cantidad de elementos de los vectores: ");
    scanf("%d", &n);
    carga(n, vecA, vecB);
    suma(n, vecA, vecB, vecS);

    return 0;
}
