/*
Ingresar la cantidad de horas trabajadas por un empleado durante el mes a fin de calcular el
monto de su salario mensual, el que se liquida de la siguiente manera:
✓ Si trabaja 180 horas o menos, se le paga $ 560,00 la hora.
✓ Si trabaja más de 180 se le paga un plus de $ 200,00 por cada hora adicional.

*/

// Función para calcular el salario mensual
float calcularSalarioMensual(int horasTrabajadas) {
    const float tarifaHoraNormal = 560.00; // Tarifa por hora normal
    const float tarifaHoraExtra = 200.00; // Tarifa por hora extra
    const int horasNormales = 180; // Cantidad de horas normales

    float salarioMensual = 0.0;

    if (horasTrabajadas <= horasNormales) {
        // Si trabajó 180 horas o menos
        salarioMensual = horasTrabajadas * tarifaHoraNormal;
    } else {
        // Si trabajó más de 180 horas
        int horasExtras = horasTrabajadas - horasNormales;
        salarioMensual = (horasNormales * tarifaHoraNormal) + (horasExtras * tarifaHoraExtra);
    }

    return salarioMensual;
}

int main() {
    int horasTrabajadas;
    printf("Ingrese la cantidad de horas trabajadas durante el mes: ");
    scanf("%d", &horasTrabajadas);

    float salario = calcularSalarioMensual(horasTrabajadas);

    printf("El salario mensual es: $%.2f\n", salario);

    return 0;
}
