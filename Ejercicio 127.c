/*
Se tienen dos vectores de números enteros, ambos de igual tamaño.

a. Implementa una función para llenar dos vectores con números enteros.

b. Crea una función que tome los dos vectores llenados y los reste elemento por elemento, 
almacenando el resultado en un tercer vector llamado "resta".

c. Escribe una función para calcular el promedio de los elementos en el vector "multi".

d. Desarrolla una función que determine el valor máximo dentro del vector "multi".

Escribe el código en lenguaje C para cada una de las funciones mencionadas 
y demuestra su funcionamiento en un programa principal que muestre los resultados obtenidos.

*/

#include <stdio.h>

void carga(int n, int vecA[], int vecB[], int ml[])
{
    for (int i = 0; i < n; i++)
    {
        printf("Ingresa el valor del vector A[%d]: ", i);
        scanf("%d", &vecA[i]);
        printf("Ingresa el valor del vector B[%d]: ", i);
        scanf("%d", &vecB[i]);
        ml[i] = vecA[i] * vecB[i];
    }
    
    printf("Vectores A y B llenados y multiplicados:\n");
    for (int i = 0; i < n; i++)
    {
        printf("ml[%d] = %d\n", i, ml[i]);
    }
}

void promedioYMaximo(int n, int ml[])
{
    int sumi = 0, may = ml[0];
    for (int i = 0; i < n; i++)
    {
        sumi += ml[i];
        if (ml[i] > may)
        {
            may = ml[i];
        }
    }
    
    float promi = (float)sumi / n;
    printf("El promedio es %.2f\n", promi);
    printf("El valor mayor es %d\n", may);
}

int main()
{
    int n, vecA[100], vecB[100], ml[100];
    printf("Ingrese la cantidad de elementos que tendrán los vectores: ");
    scanf("%d", &n);
    carga(n, vecA, vecB, ml);
    promedioYMaximo(n, ml);
    
    return 0;
}
