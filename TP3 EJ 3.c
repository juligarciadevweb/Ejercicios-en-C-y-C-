/*

Ingresar un numero entero. se pide lo siguiente:
✓ Si es positivo o cero hallar su raíz cuadrada y mostrar el resultado con un mensaje.
✓ Si no es positivo o cero hallar su modulo (valor absoluto) y luego la raíz cuadrada del
módulo.

*/

int main(){
    int number;
    printf("Ingrese cualquier numero: ");
    scanf("%d", &number);
    if (number >= 0)
    {
        double raiz = sqrt(number); //Fuerzo el tipo de dato
        printf("La raiz cuadrada de %d es %lf", number, raiz);
    }
    else
    {
        int absolute = abs(number); //Declaro todo en una variable forzando el tipo de dato
        double raiz2 = sqrt(absolute);
        printf("El valor absoluto de %d es %d", number, absolute);
        printf("\nLa raiz cuadrada de %d es %lf", number, raiz2);
    }
    return 0;

}
