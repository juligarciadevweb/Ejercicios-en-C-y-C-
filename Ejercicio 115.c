//TP4 EJ 1 -- Funcion sin tipo

/*
Se ingresan los límites de un intervalo (A, B] en la función main.

I) Ingrese N números reales en una función sin tipo (llamada intervalo(..)). 
El valor N y los límites del intervalo serán ingresado (leídos) en la función main, 
los cuales deberán ser transferidos a la función intervalo 
usando parámetro por valor en todos los casos.

II) La función intervalo deberá contar y mostrar luego de terminado el ingreso la cantidad de valores
que están dentro del intervalo y la cantidad de valores que están fuera del mismo
*/

//#include <stdio.h>

void intervalo(int n, float a, float b)
{
    int countDentro = 0; // Contador para los valores dentro del intervalo
    int countFuera = 0; // Contador para los valores fuera del intervalo

    // Ingresar N números reales
    for (int i = 0; i < n; i++)
    {
        float num;
        printf("Ingrese un número real: ");
        scanf("%f", &num);

        // Verificar si el número está dentro o fuera del intervalo
        if (num > a && num <= b)
        {
            countDentro++; // Incrementar el contador de valores dentro del intervalo
        }
        else
        {
            countFuera++; // Incrementar el contador de valores fuera del intervalo
        }
    }

    // Mostrar los resultados
    printf("Cantidad de valores dentro del intervalo: %d\n", countDentro);
    printf("Cantidad de valores fuera del intervalo: %d\n", countFuera);
}

int main()
{
    int n;
    float a, b;

    printf("Ingrese el límite inferior del intervalo: ");
    scanf("%f", &a);
    printf("Ingrese el límite superior del intervalo: ");
    scanf("%f", &b);
    printf("Ingrese la cantidad de números a ingresar: ");
    scanf("%d", &n);

    intervalo(n, a, b);

    return 0;
}
