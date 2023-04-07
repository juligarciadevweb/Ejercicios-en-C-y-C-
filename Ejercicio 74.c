/*

Realizar un programa que permita cargar dos listas de 15 valores cada una. 
Informar con un mensaje cual de las dos listas tiene un valor acumulado mayor 
(mensajes "Lista 1 mayor", "Lista 2 mayor", "Listas iguales")
Tener en cuenta que puede haber dos o más estructuras repetitivas en un algoritmo.

*/

int main(){
    int numeros[15];
    int suma1 = 0;

    printf("Ingrese 15 números enteros:\n");

    // Leer los 15 números del usuario
    for (int i = 0; i < 15; i++) {
        scanf("%d", &numeros[i]);
    }

    // Sumar los valores de la lista
    for (int i = 0; i < 15; i++) {
        suma1 += numeros[i];
    }

    printf("La suma de los números es: %d\n", suma1);
 
    int num2[15];
        int suma = 0;

    printf("Ingrese 15 números enteros:\n");

    // Leer los 15 números del usuario
    for (int i = 0; i < 15; i++) {
        scanf("%d", &num2[i]);
    }

    // Sumar los valores de la lista
    for (int i = 0; i < 15; i++) {
        suma += num2[i];
    }

    printf("La suma de los números es: %d\n", suma);

    if (suma < suma1)
    {
        printf("Lista 2 mayor");
    } else if (suma1 < suma)
    {
        printf("Lista 1 mayor");
    } else
    {
        printf("Las suma de las listas son iguales");
    }
    
    return 0;
}
