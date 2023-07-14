                        //Funcion con tipo y parametros por valor

/*
Ingresar una cantidad de N valores enteros.
a) A través de una función Sin Tipo encontrar el porcentaje de valores pares que se introducen, la
función recibe dos parámetros el primero por valor (cantidad a sumar) y otro por referencia (variable
que almacena la suma de los números recibidos).
b) A través de una función Con Tipo encontrar el promedio de valores impares.
c) Muestre los resultados obtenidos en la función main
*/

//#include <stdio.h>

void porcentaje(int n, int *sum)
{
    int num;
    int pares = 0;
    int x = 0;
    while (x < n)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            pares++;
        }
        *sum += num;
        x++;
    }
    float porcentajePares = (float)pares / n * 100;
    printf("Porcentaje de numeros pares: %.2f%%\n", porcentajePares);
}

float promedioImpares(int n)
{
    int num;
    int impares = 0;
    int sumaImpares = 0;
    int x = 0;
    while (x < n)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &num);
        if (num % 2 != 0)
        {
            impares++;
            sumaImpares += num;
        }
        x++;
    }
    if (impares == 0)
    {
        return 0.0;
    }
    float promedio = (float)sumaImpares / impares;
    return promedio;
}

int main()
{
    int n;
    printf("Ingrese la cantidad de numeros a ingresar: ");
    scanf("%d", &n);

    int sum = 0;
    porcentaje(n, &sum);

    float promedio = promedioImpares(n);
    printf("Promedio de numeros impares: %.2f\n", promedio);

    return 0;
}
