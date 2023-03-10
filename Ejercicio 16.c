/*

Escribe un programa que solicite al usuario 
que ingrese un número entero positivo y muestre por pantalla 
la suma de todos los números pares que hay entre 1 y ese número. 
Si el usuario ingresa un número negativo o cero, 
el programa debe mostrar un mensaje de error.

*/

int main() {
    int num, sum = 0; //Inicializamos la variable en 0
    printf("Ingrese un número entero positivo: "); //Pedimos el numero
    scanf("%d", &num); //Leemos el numero
    
    //Primero te encargas de la condicion booleana para el error
    if (num <= 0) {
        printf("Error: el número debe ser positivo.\n");
        return 1; // Termina el programa con código de error 1
    }

        for (int i = 2; i <= num; i += 2) { //Num tiene que ser mayor o igual a 2
        sum += i; //sumamos de a 2
    }
    printf("La suma de los números pares entre 1 y %d es %d.\n", num, sum);
    return 0; // Termina el programa con éxito
}
