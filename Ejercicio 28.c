/*

Para N empleados que trabajan en una fábrica ingrese por cada uno de ellos el valor de cada hora y la cantidad de horas trabajadas por un empleado, se pide mostrar por cada uno de ellos:

Mostrar un mensaje “No trabajo” si la cantidad de horas es igual a cero.

Mostrar el sueldo del empleado, teniendo en cuenta que se le realiza un descuento del 11% para jubilación y de un 3% para obra social, y si trabajó más de 60 hs tiene un premio de 5% sobre el total de cantidad de horas*valor de la hora

Y además el concepto total en pago de sueldos por la fábrica.

*/


#include <stdio.h>

int main() {
    // Ingresar número de empleados
    int n;
    printf("Ingrese el número de empleados: ");
    scanf("%d", &n);

    // Inicializar variables para el total de pago de sueldos
    float total_sueldos = 0;

    // Ciclo para procesar cada empleado
    for (int i = 1; i <= n; i++) {
        // Ingresar las horas trabajadas y el valor de la hora
        float horas_trabajadas, valor_hora;
        printf("\nIngrese las horas trabajadas por el empleado %d: ", i);
        scanf("%f", &horas_trabajadas);
        printf("Ingrese el valor de la hora para el empleado %d: ", i);
        scanf("%f", &valor_hora);

        // Comprobar si el empleado trabajó o no
        if (horas_trabajadas == 0) {
            printf("El empleado %d no trabajó.\n", i);
            continue;
        }

        // Calcular el sueldo bruto y los descuentos
        float sueldo_bruto = horas_trabajadas * valor_hora;
        float descuento_jubilacion = sueldo_bruto * 0.11;
        float descuento_obrasocial = sueldo_bruto * 0.03;

        // Comprobar si el empleado tiene derecho a un premio
        float premio = 0;
        if (horas_trabajadas > 60) {
            premio = horas_trabajadas * valor_hora * 0.05;
        }

        // Calcular el sueldo neto y mostrar resultados
        float sueldo_neto = sueldo_bruto - descuento_jubilacion - descuento_obrasocial + premio;
        printf("El sueldo del empleado %d es de $%.2f\n", i, sueldo_neto);

        // Actualizar el total de pago de sueldos
        total_sueldos += sueldo_neto;
    }

    // Mostrar el total de pago de sueldos
    printf("\nEl total de pago de sueldos de la fábrica es de $%.2f\n", total_sueldos);

    return 0;
}

