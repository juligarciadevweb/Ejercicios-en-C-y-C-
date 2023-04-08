/*
Escribir un programa que solicite la carga de un número entre 0 y 999, 
y nos muestre un mensaje de cuántos dígitos tiene el mismo. 
Finalizar el programa cuando se cargue el valor 0.
*/

#include <stdio.h>

int main() {
    int num;

    do {
        printf("Ingrese un numero entre 0 y 999: ");
        scanf("%d", &num);

        if (num > 99) {
            printf("Tiene 3 digitos\n");
        } else if (num >= 10) {
            printf("Tiene 2 digitos\n");
        } else if (num >= 0) {
            printf("Tiene 1 digito\n");
        }
    } while (num != 0);

    return 0;
}
