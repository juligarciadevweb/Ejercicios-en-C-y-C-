/*

Ingresar 4 valores (I, J, K y L). Si I/J = K/I mostrar un mensaje indicando que el resultado de las
divisiones es igual, caso contrario mostrar un mensaje indicando que no son iguales.

*/


int main() {
    float I, J, K, L;

    // Use scanf() function to get input from the user
    printf("Ingrese el valor de I: ");
    scanf("%f", &I);
    printf("Ingrese el valor de J: ");
    scanf("%f", &J);
    printf("Ingrese el valor de K: ");
    scanf("%f", &K);
    printf("Ingrese el valor de L: ");
    scanf("%f", &L);

    // Check if the result of the divisions is equal and print the appropriate message
    if (I/J == K/I) {
        printf("El resultado de las divisiones es igual.\n");
    } else {
        printf("El resultado de las divisiones no es igual.\n");
    }

    return 0;
}
