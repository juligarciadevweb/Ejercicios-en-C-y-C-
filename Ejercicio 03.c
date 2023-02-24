/*

Dados el precio de costo de un producto y la cantidad solicitada del mismo, 
obtener un presupuesto de venta final, teniendo en cuenta que se aplica
    o el IVA (21%),
    o un impuesto provincial interno (2%)
    o y la ganancia del 30% hasta 10 unidades
    o y de un 15% para cantidades superiores.

*/
#include <stdio.h>

int main() {
    float precio_costo, precio_venta;
    int cantidad_solicitada;

    printf("Ingrese el precio de costo del producto: ");
    scanf("%f", &precio_costo);

    printf("Ingrese la cantidad solicitada del producto: ");
    scanf("%d", &cantidad_solicitada);

    // Cálculo del precio de venta con IVA del 21%
    precio_venta = precio_costo * 1.21;

    if (cantidad_solicitada <= 10) {
        // Aplicar un 30% de ganancia si la cantidad es menor o igual a 10
        precio_venta *= 1.3;
    } else {
        // Aplicar un 15% de ganancia si la cantidad es mayor a 10
        precio_venta *= 1.15;
    }

    // Aplicar un impuesto provincial interno del 2%
    precio_venta *= 1.02;

    printf("El presupuesto de venta final es: $%.2f\n", precio_venta);

    return 0;
}
