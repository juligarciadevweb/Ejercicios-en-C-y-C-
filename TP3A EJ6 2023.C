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

int main()
{
    float precioPropiedad;
    float pagoPropio;
    float prestamoBancario;
    float financiamientoVendedor;
    float interesVendedor = 0.06;
    float interesBanco = 0.165;

    printf("Ingrese el precio de la propiedad: $");
    scanf("%f", &precioPropiedad);

    if (precioPropiedad > 2500000)
    {
        pagoPropio = precioPropiedad * 0.45;
        prestamoBancario = precioPropiedad * 0.40;
        financiamientoVendedor = precioPropiedad * 0.15;
    }
    else
    {
        pagoPropio = precioPropiedad * 0.70;
        financiamientoVendedor = precioPropiedad * 0.30;
    }

    float interesesVendedor = financiamientoVendedor * interesVendedor;
    float interesesBanco = prestamoBancario * interesBanco;

    printf("\nDetalle de pagos:\n");
    printf("Pago con dinero propio: $%.2f\n", pagoPropio);
    printf("Préstamo bancario: $%.2f\n", prestamoBancario);
    printf("Financiamiento del vendedor: $%.2f\n", financiamientoVendedor);
    printf("\nDetalle de intereses:\n");
    printf("Intereses del vendedor: $%.2f\n", interesesVendedor);
    printf("Intereses del banco: $%.2f\n", interesesBanco);

    return 0;
}
