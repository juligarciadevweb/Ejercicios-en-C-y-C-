/*
Ingresar N números enteros, calcule mediante una función con tipo 
el promedio de los valores pares.
El resultado se debe mostrar en main().
*/

float promedio(int n)
{
    int sum = 0;
    int contPares = 0;
    float prom = 0.00;
    int number;

    for (int i = 0; i < n; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &number);
        //Verificamos si es par
        if (number % 2 == 0)
        {
            contPares++; //Cuenta los pares
            sum+=number; //Acumula sus valores
        }
    }
    
    prom = (float) sum / contPares;
    return prom;
}



int main(int argc, char const *argv[])
{
    int n;
    printf("Ingrese la cantidad de numeros: ");
    scanf("%d", &n);
    float beta = promedio(n);

    printf("El promedio de los pares es %0.2f", beta);
    return 0;
}
