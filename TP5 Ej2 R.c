/*
Una empresa de emergencias médicas registra la información, en vectores paralelos, 
de 5 Ambulancias que trabajan 24hs diarias todos los días del mes: 

UNI (vector que posee el número de móvil), 
CAN (vector que registra el total de emergencias atendidas por el móvil en el mes).

a. Ingresar la información a los vectores a través de una función sin tipo.
b. Ordenar los vectores por cantidad de emergencias médicas atendidas.
*/

#include <stdio.h>

//Realizas la carga en la funcion sin tipo, recordando que los vectores son globales
void cargaVec(int n, int vecUNI[100], int vecCan[100])
{
    for (int i = 0; i < n; i++)
    {
        printf("Ingrese el numero de la unidad [%d] = ", i);
        scanf("%d", &vecUNI[i]);
        printf("Ingrese la cantidad de emergencias medicas atendidas por el movil [%d] = ", i);
        scanf("%d", &vecCan[i]);
    }
}

int main()
{
    int n, vecUni[100], vecCan[100], aux, aux22, b;
    printf("Ingrese la cantidad de elementos de cada vector: ");
    scanf("%d", &n);
    cargaVec(n, vecUni, vecCan);

    //Lo ordeno usando el metodo burbuja
    do
    {
        b = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (vecCan[i] < vecCan[i + 1])
            {
                //Hago en el vector secundario lo mismo que en la clave primaria
                aux = vecUni[i];
                vecUni[i] = vecUni[i + 1];
                vecUni[i + 1] = aux;

                //Clave principal
                aux22 = vecCan[i];
                vecCan[i] = vecCan[i + 1];
                vecCan[i + 1] = aux22;

                b = 1;
            }
        } //El ciclo for continua mientras el vector este desordenado

    } while (b == 1);

    //Mostramos el vector ordenado
    printf("\nLa cantidad de emergencias medicas atendidas ordenadas es:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Numero de unidad [%d] = %d\n", i, vecUni[i]);
        printf("Cantidad de emergencias atendidas [%d] = %d\n", i, vecCan[i]);
    }

    return 0;
}


