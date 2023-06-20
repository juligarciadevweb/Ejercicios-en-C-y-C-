/*
Dados dos valores enteros A y B de n duplas
indicar si el resultado de dividir el valor absoluto de la suma de A+B 
entre el valor absoluto de la resta de B-A es exacta.

Puedes obtener el valor absoluto de un número utilizando la función abs(), 
que se encuentra en la biblioteca estándar <stdlib.h>. 
La función abs() acepta un argumento de tipo int, long, long long, float, o double, 
y devuelve el valor absoluto correspondiente.
*/


int main()
{
    int n;
    printf("Ingrese la cantidad de duplas: ");
    scanf("%d", &n);

    int i = 1;
    while (i <= n)
    {
        int A, B;
        printf("Ingrese el valor de A: ");
        scanf("%d", &A);
        printf("Ingrese el valor de B: ");
        scanf("%d", &B);

        //Uso de variables secundarias
        int suma = A + B;
        int resta = B - A;
        float division = (float)abs(suma) / abs(resta);

        if (division == (int)division)
        {
            printf("La división es exacta para la dupla %d.\n", i);
        }
        else
        {
            printf("La división no es exacta para la dupla %d.\n", i);
        }

        i++;
    }

    return 0;
}


