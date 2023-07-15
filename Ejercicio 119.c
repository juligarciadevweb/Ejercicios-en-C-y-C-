                //TP4 - Funcion sin tipo - EJ 4
/*
Se ingresan N números reales, crea una función (Suma) para leer los N números ingresados y realizar la
suma.
El valor N se introduce por teclado en la función main y 
es transferido a la función suma usando parámetro por valor.
Mostrar el resultado de la suma en la función main. 
La variable que acumula los valores sumados debe ser de tipo real.
*/

void suma(int n, int *suma2)
    {
        int num;
        for (int i = 0; i < n; i++)
        {
            printf("Ingrese un numero: ");
            scanf("%d", &num);
            *suma2 += num; 
        }
    }

int main()
{
    int suma2 = 0;
    int n;
    printf("Ingrese la cantidad de numeros a trabajar: ");
    scanf("%d", &n);
    suma(n, &suma2);

    printf("La suma es %d", suma2);
    return 0;
}
