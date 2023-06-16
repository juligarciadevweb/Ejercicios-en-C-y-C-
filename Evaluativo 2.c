/*
Escribe un programa que solicite al usuario ingresar una serie de números enteros 
y cuente la cantidad de números pares ingresados. La entrada finaliza cuando se ingresa el número 0. Utiliza un ciclo do-while para realizar esta tarea. 
Al finalizar, muestra el total de números pares ingresados.
*/

#include <stdio.h>

int main()
{
    int numPar = 0;
    int n;

    do
    {
        printf("Ingrese un numero: ");
        scanf("%d", &n);

        if (n != 0 && n % 2 == 0)//Se tienen que cumplir ambas condiciones
        {
            numPar++; //Recien despues de las verificaciones de las condiciones aumenta el contador
        }

    } while (n != 0);

    printf("La cantidad de numeros pares es: %d", numPar);
    return 0;
}
