/*
Se desea realizar la liquidación de sueldos para empleados de una institución. Se conoce el
Salario Básico y los siguientes ítems:
a. Adicionales:
i. 10% en concepto de antigüedad.
ii. $12500,00 en concepto de Salario Familiar.
b. Descuentos:
i. 14% de aporte jubilatorio.
ii. $1500,00 de seguro de vida obligatorio.
Mostrar cada ítem del sueldo y el total a percibir por el empleado
*/

#include <stdio.h>

int main() {
    double salarioBasico, antiguedad, salarioFamiliar, aporteJubilatorio, seguroVida;
    double totalAdicionales, totalDescuentos, totalSueldo;

    // Obtener el salario básico ingresado por el usuario
    printf("Ingrese el salario básico: ");
    scanf("%lf", &salarioBasico);

    // Calcular los ítems del sueldo
    antiguedad = salarioBasico * 0.1;
    salarioFamiliar = 12500.00;
    aporteJubilatorio = salarioBasico * 0.14;
    seguroVida = 1500.00;

    totalAdicionales = antiguedad + salarioFamiliar;
    totalDescuentos = aporteJubilatorio + seguroVida;
    totalSueldo = salarioBasico + totalAdicionales - totalDescuentos;

    // Mostrar los resultados
    printf("Detalle de la liquidación de sueldos:\n");
    printf("Salario básico: $%.2lf\n", salarioBasico);
    printf("Antigüedad: $%.2lf\n", antiguedad);
    printf("Salario familiar: $%.2lf\n", salarioFamiliar);
    printf("Total de adicionales: $%.2lf\n", totalAdicionales);
    printf("Aporte jubilatorio: $%.2lf\n", aporteJubilatorio);
    printf("Seguro de vida: $%.2lf\n", seguroVida);
    printf("Total de descuentos: $%.2lf\n", totalDescuentos);
    printf("Total a percibir: $%.2lf\n", totalSueldo);

    return 0;
}
