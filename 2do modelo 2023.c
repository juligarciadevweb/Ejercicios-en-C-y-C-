/*
EJERCICIO N° 2- No usar Variables Globales

Una fábrica metalúrgica realiza la fabricación de N piezas de aceros. 
Registra en un arreglo unidimensional el peso de cada una de las piezas,

SE PIDE:

a) Realizar la carga del vector utilizando una función sin tipo.

b) Determinar el porcentaje de piezas que tienen un peso menor a 9,8 kg.

c) Determinar el peso total de piezas procesadas.
*/

#include <stdio.h>

void cargaVec(int n, int vec[100])
{
    int cantidadMenorA9_8 = 0;
    int suma = 0;

    for (int i = 0; i < n; i++)
    {
        printf("Ingrese el peso: ");
        scanf("%d", &vec[i]);
        if (vec[i] < 9.8)
        {
            cantidadMenorA9_8++;
        }
        suma += vec[i];
    }

    float porcentaje = (float)(cantidadMenorA9_8) / n * 100;
    printf("El porcentaje de piezas con peso menor a 9.8 kg es: %.2f%%\n", porcentaje);

    printf("El peso total de piezas procesadas es: %d kg\n", suma);
}



int main()
{
    int n;
    int vec[100];

    printf("Ingrese la cantidad de piezas a trabajar: ");
    scanf("%d", &n);

    cargaVec(n, vec);
    return 0;
}
