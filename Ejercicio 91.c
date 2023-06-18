                            //REDEFINICION EJ6 TP2A
/*
Una Empresa planea realizar la compra de una propiedad. La capacidad financiera de la
empresa está sujeta al valor de la propiedad:
    a. Si el precio de la propiedad es mayor a $ 2.500.000 pagará con dinero propio el 45 %, el
40% mediante préstamo bancario y el saldo del 15% con financiamiento del vendedor.
    b. Si el precio de la propiedad es $ 2.500.000 o menor pagará con dinero propio el 70 % y el
30% mediante financiamiento del vendedor.
El vendedor cobra en concepto de intereses un 6% y el Banco un 16,5 %
*/

#include <stdio.h>

void calcularCompraPropiedad(int value)
{
    float intVendedor = value * (6.0 / 100); // Intereses cobrados por el vendedor
    float intBanco = value * (16.5 / 100);   // Intereses cobrados por el banco

    if (value > 2500000)
    {
        float pagoPropio = value * (45.0 / 100);//Siempre utiliza porcentajes exactos con .0
        float pagoPrestamo = value * (40.0 / 100);
        float pagoFinanciamiento = value * (15.0 / 100);

        printf("Pagará $%.2f con dinero propio.\n", pagoPropio);
        printf("Pagará $%.2f con un préstamo bancario.\n", pagoPrestamo);
        printf("Pagará $%.2f con financiamiento del vendedor.\n", pagoFinanciamiento);
    }
    else if (value <= 2500000)
    {
        float pagoPropio = value * (70.0 / 100);
        float pagoFinanciamiento = value * (30.0 / 100);

        printf("Pagará $%.2f con dinero propio.\n", pagoPropio);
        printf("Pagará $%.2f con financiamiento del vendedor.\n", pagoFinanciamiento);
    }

    printf("El vendedor cobrará $%.2f en concepto de intereses.\n", intVendedor);
    printf("El banco cobrará $%.2f en concepto de intereses.\n", intBanco);
}

int main()
{
    int value;

    printf("Ingrese el valor de la propiedad: ");
    scanf("%d", &value);

    calcularCompraPropiedad(value);

    return 0;
}


