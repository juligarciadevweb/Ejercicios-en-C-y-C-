/*
Escribe un programa que permita al usuario ingresar una serie de números enteros positivos. 
El programa debe determinar si los números ingresados forman una secuencia ascendente. 
La secuencia finaliza cuando se ingrese un número negativo.
El programa debe mostrar un mensaje indicando si la secuencia es ascendente o no.
Recuerda, la secuencia finaliza cuando se ingresa un número negativo. 
El programa debe verificar si los números ingresados forman una secuencia ascendente 
y mostrar un mensaje correspondiente.
*/

#include <stdio.h>

int main()
{
    int anterior = 0;
    int num;
    int esAscendente = 1; 
    // Variable para indicar si la secuencia es ascendente 
    // (inicialmente asumimos que sí lo es)
    printf("Ingrese una serie de numeros enteros positivos. La secuencia finaliza al ingresar un numero negativo.\n");
        do
        {
            printf("Ingrese un numero: ");
            scanf("%d", &num);
            if (num < 0)
                {
                    break; // Salir del ciclo si se ingresa un número negativo
                }

            if (num <= anterior)
                {
                    esAscendente = 0; 
                    // Si el número ingresado no es mayor al anterior, 
                    // la secuencia no es ascendente
                    break; // Salir del ciclo
                }
            anterior = num;
        } while (1);

    //En caso de cumplida la condicion se mostrara un mensaje u otro
    if (esAscendente)
        {
            printf("La secuencia es ascendente.\n");
        }
    else
        {
            printf("La secuencia no es ascendente.\n");
        }

    return 0;
}


