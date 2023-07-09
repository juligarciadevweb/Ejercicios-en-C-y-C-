                //FUNCIONES SIN TIPO
/*
Se ingresan N números reales, 
crea una función (Suma) para leer los N números ingresados y realizar la suma.
El valor N se introduce por teclado en la función main 
y es transferido a la función suma usando parámetro por valor.
Mostrar el resultado de la suma en la función main. 
La variable que acumula los valores sumados debe ser de tipo real.
*/
#include <stdio.h>

void suma(int n, int *s)
{
    int x = 0;
    int num;
    do
    {
        printf("Ingrese el numero: ");
        scanf("%d", &num);
        *s = *s + num;
        x++;
    } while (x < n);
}

int main()
{   
    int n; 
    int s = 0; 
    printf("Ingrese la cantidad de numeros a sumar: ");
    scanf("%d", &n);
    suma(n, &s);
    printf("La suma es: %d", s);
    return 0;
}
