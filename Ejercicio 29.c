/*

Realizar un programa que pida un numero entero:
    Mostrar un mensaje que indique si el numero tiene 1, 2 o 3 cifras
    En caso que el numero sea mayor a 3 cifras mostrar un mensaje de error

*/

#include <stdio.h>

int main() {
    int num;

    // Solicitar al usuario que ingrese un número
    printf("Ingrese un número: ");
    scanf("%d", &num);

    // Determinar el número de cifras del número ingresado
    if (num < 10) {
        printf("El número tiene 1 cifra\n");
    } else if (num < 100) {
        printf("El número tiene 2 cifras\n");
    } else if (num < 1000) {
        printf("El número tiene 3 cifras\n");
    } else {
        printf("Error: el número ingresado debe ser menor que 1000\n");
    }

    return 0;
}
