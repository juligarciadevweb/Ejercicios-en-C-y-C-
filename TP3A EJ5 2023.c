/*
Un Importador adquiere un bien en el extranjero y desea saber cuál será el precio de costo
final de importación, sabiendo que los gastos son:
a. Impuesto de Aduana: 15% para bienes con un valor declarado de U$S 1.500,00 o
menor y de 20% para bienes con un valor declarado mayor al monto anterior.
b. Flete desde el país de origen: U$S 200,00.
c. Seguro por daños o extravío: 2% del valor declarado del bien.
*/
#include <stdio.h>

int main()
{
    float valorDeclarado;
    float impuestoAduana;
    float flete;
    float seguro;
    float precioCostoFinal;

    printf("Ingrese el valor declarado del bien en U$S: ");
    scanf("%f", &valorDeclarado);

    if (valorDeclarado <= 1500)
    {
        impuestoAduana = valorDeclarado * 0.15;
    }
    else
    {
        impuestoAduana = valorDeclarado * 0.20;
    }

    flete = 200;
    seguro = valorDeclarado * 0.02;

    precioCostoFinal = valorDeclarado + impuestoAduana + flete + seguro;

    printf("\nDetalle de gastos:\n");
    printf("Impuesto de Aduana: U$S %.2f\n", impuestoAduana);
    printf("Flete desde el país de origen: U$S %.2f\n", flete);
    printf("Seguro por daños o extravío: U$S %.2f\n", seguro);
    printf("\nPrecio de costo final de importación: U$S %.2f\n", precioCostoFinal);

    return 0;
}

