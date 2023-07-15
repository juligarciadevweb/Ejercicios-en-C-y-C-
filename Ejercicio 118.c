//Funcion sin tipo con parametro por referencia

/*
Crear un programa que solicite al usuario ingresar una serie de números enteros positivos. 
El programa debe calcular y mostrar la suma de los números pares ingresados 
y el promedio de los números impares ingresados. 
El ingreso de números finaliza cuando se ingresa un número negativo. 
*/

void impPar(int *suma, int *sumaImp, int *x)
{
    int num;
    do
    {
        printf("Ingrese un numero: ");
        scanf("%d", &num);
        if (num % 2 == 0 && num >= 0)
        {
            *suma += num;
        }
        else
        {
            *sumaImp += num;
            (*x)++;
            /* Al usar paréntesis en (*x)++, 
            se asegura que primero se aplique el operador de dirección * a x 
            y luego se incremente el valor resultante en 1.
            */
        }
    } while (num >= 0);
}

int main()
{
    int x = 0; //Contador de impares
    int suma = 0; //Sumador de pares
    int sumaImp = 0; // Sumador de impares
    impPar(&suma, &sumaImp, &x); //Llamada a la funcion
    float promedio = (float)sumaImp / x; //Calculo del promedio de impares
    printf("El promedio de los impares es: %.2f\n", promedio);
    printf("La suma de los pares es: %d\n", suma);
    return 0;
}
