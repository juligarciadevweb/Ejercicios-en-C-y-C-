#include <stdio.h>

int main() {
    const float tarifaHoraNormal = 560.00; // Tarifa por hora normal
    const float tarifaHoraExtra = 200.00; // Tarifa por hora extra
    const int horasNormales = 180; // Cantidad de horas normales

    int horasTrabajadas;
    float salarioMensual;

    printf("Ingrese la cantidad de horas trabajadas durante el mes: ");
    scanf("%d", &horasTrabajadas);

    if (horasTrabajadas <= horasNormales) {
        salarioMensual = horasTrabajadas * tarifaHoraNormal;
    } else {
        salarioMensual = (horasNormales * tarifaHoraNormal) + ((horasTrabajadas - horasNormales) * tarifaHoraExtra);
    }

    printf("El salario mensual es: $%.2f\n", salarioMensual);

    return 0;
}
