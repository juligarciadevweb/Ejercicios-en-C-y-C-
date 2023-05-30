/*
Una Empresa planea realizar la compra de una propiedad. La capacidad financiera de la
empresa está sujeta al valor de la propiedad:
    a. Si el precio de la propiedad es mayor a $ 2.500.000 pagará con dinero propio el 45 %, el
40% mediante préstamo bancario y el saldo del 15% con financiamiento del vendedor.
    b. Si el precio de la propiedad es $ 2.500.000 o menor pagará con dinero propio el 70 % y el
30% mediante financiamiento del vendedor.
El vendedor cobra en concepto de intereses un 6% y el Banco un 16,5 %
*/

//#include <stdio.h>

int main() {
    float vp;
    printf("Ingrese el valor de la propiedad: ");
    scanf("%f", &vp);

    if (vp > 2500000) {
        float porA = vp * 0.45;
        float porA2 = vp * 0.4;
        float porA3 = vp * 0.15;
        float interesVendedor = porA2 * 0.06;
        float interesBanco = porA2 * 0.165;

        printf("Pagara %.2f en dinero en efectivo\n", porA);
        printf("Pagara %.2f con prestamo bancario, incluyendo %.2f de intereses del banco\n", porA2, interesBanco);
        printf("Pagara %.2f con financiamiento del vendedor, incluyendo %.2f de intereses del vendedor\n", porA3, interesVendedor);
    } else {
        float porB1 = vp * 0.7;
        float porB2 = vp * 0.3;
        float interesVendedor = porB2 * 0.06;

        printf("Pagara %.2f con dinero propio\n", porB1);
        printf("Pagara %.2f con financiamiento del vendedor, incluyendo %.2f de intereses del vendedor\n", porB2, interesVendedor);
    }

    return 0;
}
