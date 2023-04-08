/*
Escribe un programa que solicite al usuario que ingrese un número entero del 1 al 10 y muestre la tabla de multiplicar de ese número del 1 al 10. 
Si el usuario ingresa un número fuera del rango válido, el programa debe mostrar un mensaje de error.

*/


int main() {
    int numero;
    printf("Ingresa un número del 1 al 10:\n");
    scanf("%d", &numero);

    switch (numero) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            printf("Tabla de multiplicar del %d:\n", numero);
            for (int i = 1; i <= 10; i++) {
                printf("%d x %d = %d\n", numero, i, numero * i);
            }
            break;
        default:
            printf("El número ingresado no es válido\n");
            break;
    }

    return 0;
}
