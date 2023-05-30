/*
Un Importador adquiere un bien en el extranjero y desea saber cuál será el precio de costo
final de importación, sabiendo que los gastos son:
    a. Impuesto de Aduana: 15% para bienes con un valor declarado de U$S 1.500,00 o
menor y de 20% para bienes con un valor declarado mayor al monto anterior.
    b. Flete desde el país de origen: U$S 200,00.
    c. Seguro por daños o extravío: 2% del valor declarado del bien
*/

#include <stdio.h>

int valorDeclarado;
int flete = 200;

int main() {
    printf("Ingrese el valor del producto en dólares: ");
    scanf("%d", &valorDeclarado);
    float imp1 = valorDeclarado * (15.0 / 100);
    float imp2 = valorDeclarado * (20.0 / 100);
    float seg = valorDeclarado * (2.0 / 100);
    float valor11 = valorDeclarado + imp1 + flete + seg;
    float valor22 = valorDeclarado + imp2 + flete + seg;
    if (valorDeclarado <= 1500.00) {
        printf("Tendrá que pagar un impuesto cuyo valor será %f\n", imp1);
        printf("Sumando el flete, el impuesto y el seguro, el costo del producto quedará en %f\n", valor11);
    } else {
        printf("Tendrá que pagar un impuesto cuyo valor será %f\n", imp2);
        printf("Sumando el flete, el impuesto y el seguro, el costo del producto quedará en %f\n", valor22);
    }
    return 0;
}
