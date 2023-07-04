/*
Escribe un programa que solicite al usuario ingresar una serie de números enteros positivos y cuente la cantidad de números impares ingresados. La entrada finaliza cuando se ingresa un número negativo. Utiliza un ciclo while para realizar esta tarea. 
Al finalizar, muestra el total de números pares e impares ingresados.
*/

#include <stdio.h>

int main()
{
    int num;
    int conImp = 0;
    int conPar = 0;
    
    do
    {
        printf("Ingrese un numero: ");
        scanf("%d", &num);

        if (num % 2 == 0 && num != 0)
        {
            conPar++;
        }
        else if (num != 0)
        {
            conImp++;
        }

    } while (num != 0);

    printf("\nLa cantidad de numeros impares es %d", conImp);
    printf("\nLa cantidad de numeros pares es %d", conPar);

    return 0;
}

