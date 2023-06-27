/*
 Ingresar la cantidad de horas trabajadas por un empleado durante el mes a fin de calcular el
monto de su salario mensual, el que se liquida de la siguiente manera:
✓ Si trabaja 180 horas o menos, se le paga $ 560,00 la hora.
✓ Si trabaja más de 180 se le paga un plus de $ 200,00 por cada hora adicional
*/

#include <stdio.h>

int main()
{
    int horasTrabajadas;
    float salarioHora = 560.00;
    float salarioMensual;

    printf("Ingrese la cantidad de horas trabajadas durante el mes: ");
    scanf("%d", &horasTrabajadas);

    if (horasTrabajadas <= 180)
    {
        salarioMensual = horasTrabajadas * salarioHora;
    }
    else
    {
        int horasExtra = horasTrabajadas - 180;
        float salarioExtra = horasExtra * 200.00;
        salarioMensual = (180 * salarioHora) + salarioExtra;
    }

    printf("El salario mensual es: %.2f\n", salarioMensual);

    return 0;
}
