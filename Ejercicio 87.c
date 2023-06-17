/*
Solicite al usuario cargar una serie de N numeros enteros 
y luego imprima la suma de los mismos.
*/

int main()
{
    int x = 0; //Sera la variable de control
    int suma = 0; //La usaremos de acumulador
    int n;
    printf("Ingrese la cantidad de numeros que vamos a sumar: ");
    scanf("%d", &n);

    while (x < n)
    {
        int number;
        printf("Ingrese un numero: ");
        scanf("%d", &number);
        suma += number;
        x++;
    }
    printf("Se ingresaron %d numeros ",n);
    printf("La suma de los numeros es: %d", suma);
    return 0;
}
