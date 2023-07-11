            //Funcion con tipo con valor referencial
/*
Confeccionar una función que reciba dos enteros e imprima el mayor de ellos. 
Llamar a la función desde la main cargando previamente dos valores por teclado.
*/

int may(int num1, int num2, int *may1)
    {
        if (num1 > num2)
        {
            *may1 = num1;
        } else
        {
            *may1 = num2;
        }
    }

int main()
{
    int may1 = 0;
    int num1, num2;
    printf("Ingrese un numero: ");
    scanf("%d", & num1);
    printf("Ingrese un numero: ");
    scanf("%d", & num2);
    may(num1, num2, &may1);
    printf("El numero mayor es %d", may1);
    return 0;
}
