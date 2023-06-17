/*
Solicita al usuario ingresar numeros del tipo float 
hasta que ingrese un negativo o 0. 
Imprimir la suma de los mismos y la cantidad de cifras ingresada
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    float suma = 0;
    float y;
    int x = 0;
    do
    {
        printf("Ingrese un numero flotante: ");
        scanf("%f", &y);
        suma += y;
        x++;
    } while (y != 0);
    
    printf("Se ingresaron %d numeros ",x);
    printf("\n La suma de los mismos es %0.2f ", suma);
    return 0;
}
