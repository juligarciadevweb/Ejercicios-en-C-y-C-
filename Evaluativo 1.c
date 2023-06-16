/*
Ingresamos una cantidad no predeterminada de numeros positivos, mostrar el minimo valor ingresado
La carga finaliza cuando se ingresa 0
*/

#include<stdio.h>

int main() {
    int numero;
    int minimo = 0;  // Inicializamos el mínimo con un valor arbitrario
    
    do {
        printf("Ingrese un número (0 para finalizar): ");
        scanf("%d", &numero);
        
        if (numero != 0) {
            if (minimo == 0 || numero < minimo) {
                minimo = numero;
            }
        }
    } while (numero != 0);  // El bucle se repite mientras el número ingresado sea diferente de 0
    
    if (minimo == 0) 
    {
        printf("No se ingresaron números válidos.\n");
    } else {
        printf("El mínimo valor ingresado es: %d\n", minimo);
    }
    
    return 0;
}
