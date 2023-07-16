/*
Ingresar una serie de N números enteros positivos.
a) A través de una función Sin Tipo, determinar 
y mostrar la cantidad de números que son múltiplos de 3.
La función recibe dos parámetros: el primero por valor (cantidad de números a ingresar) y el segundo por referencia
(variable que almacena la cantidad de números múltiplos de 3 encontrados).

b) A través de una función Con Tipo, calcular y retornar el promedio de los números pares ingresados.
La función recibe dos parámetros: el primero por valor (cantidad de números a ingresar) y el segundo por referencia
(variable que almacena la suma de los números pares).

c) Mostrar los resultados obtenidos (cantidad de múltiplos de 3 y promedio de números pares) en la función main.

*/

//#include <stdio.h>

void prom(int n, int *par, int *countPar)
{
    int number = 0;
    for (int i = 0; i < n; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &number);
        if (number % 2 == 0)
        {
            (*par) += number;
            (*countPar)++;
        }
    }
}

void mult3(int n, int *multi)
{
    int num;
    int x = 0;
    while (x < n)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &num);
        if (num % 3 == 0)
        {
            (*multi)++;
        }
        x++;
    }
}

int main()
{
    int n;
    int par = 0;
    int countPar = 0;
    int multi = 0;
    printf("Ingrese la cantidad de numeros a trabajar: ");
    scanf("%d", &n);
    mult3(n, &multi);
    prom(n, &par, &countPar);
    float promedio = (float)par / countPar;
    printf("El promedio de los pares es: %.2f\n", promedio);
    printf("La cantidad de numeros multiplos de 3 es: %d\n", multi);
    return 0;
}

