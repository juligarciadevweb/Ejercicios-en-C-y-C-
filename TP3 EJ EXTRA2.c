/*

Un comerciante tiene a la venta varios tipos de productos. Se tiene la información de las ventas realizadas en un cierto periodo, se desea realizar un programa que ingresando por teclado el código de cada artículo que puede ser 1, 2 o 3, y el importe
total de las ventas realizada por ese artículo en el periodo.
El dueño del comercio desea saber:
1. Determinar que artículo tiene el mayor importe ingresado, indicando por pantalla el importe y su código.
2. Indicar el importe total vendido por cada artículo. (tres totales). Y mostrar en pantalla.
3. Calcular el porcentaje le corresponde a cada artículo sobre el importe total ingresado. Y Mostrar en pantalla.
Considere que la carga de datos finaliza cuando se ingrese un código de articulo cero.

*/

#include <stdio.h>

int main() {
    int codigo, total_ventas_1 = 0, total_ventas_2 = 0, total_ventas_3 = 0;
    float importe_1 = 0, importe_2 = 0, importe_3 = 0, importe_maximo = 0;
    int codigo_importe_maximo = 0;
    float importe_total = 0;

    printf("Ingrese el codigo del articulo (1, 2 o 3) y el importe de la venta separados por un espacio.\n");
    printf("Ingrese 0 en el codigo del articulo para finalizar.\n");

    while (1) {
        scanf("%d", &codigo);

        if (codigo == 0) {
            break;
        }

        float importe;
        scanf("%f", &importe);

        importe_total += importe;

        switch (codigo) {
            case 1:
                total_ventas_1++;
                importe_1 += importe;
                if (importe > importe_maximo) {
                    importe_maximo = importe;
                    codigo_importe_maximo = 1;
                }
                break;
            case 2:
                total_ventas_2++;
                importe_2 += importe;
                if (importe > importe_maximo) {
                    importe_maximo = importe;
                    codigo_importe_maximo = 2;
                }
                break;
            case 3:
                total_ventas_3++;
                importe_3 += importe;
                if (importe > importe_maximo) {
                    importe_maximo = importe;
                    codigo_importe_maximo = 3;
                }
                break;
            default:
                printf("Codigo de articulo invalido. Ingrese 1, 2 o 3.\n");
        }
    }

    printf("\n");

    printf("El articulo con mayor importe es el codigo %d con un importe de $%.2f.\n", codigo_importe_maximo, importe_maximo);

    printf("Importe total vendido por articulo:\n");
    printf("Articulo 1: $%.2f\n", importe_1);
    printf("Articulo 2: $%.2f\n", importe_2);
    printf("Articulo 3: $%.2f\n", importe_3);

    printf("\n");

    printf("Porcentaje correspondiente a cada articulo sobre el importe total:\n");
    printf("Articulo 1: %.2f%%\n", importe_1 / importe_total * 100);
    printf("Articulo 2: %.2f%%\n", importe_2 / importe_total * 100);
    printf("Articulo 3: %.2f%%\n", importe_3 / importe_total * 100);

    return 0;
}
