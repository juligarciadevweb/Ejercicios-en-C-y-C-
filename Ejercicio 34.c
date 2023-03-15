/* En una panadería se ingresa el precio del pan y la cantidad vendida (en kilos) por cada turno del día

(0: mañana, 1: tarde, 2: noche), para los N días del mes. 

SE PIDE:

a) Encontrar y mostrar el monto total por turno. (cantidad precio promedio) 
b) A través de una función sin tipo encontrar el porcentaje que representa el monto para cada turno.

Estos porcentajes se mostrarán en la función principal main(..)

*/
#include <stdio.h>

// Prototipo de la función para calcular el porcentaje
void calcularPorcentaje(float total, float monto, char turno[]);

int main() {
    int i, j, N;
    float precio, cantidad, monto, totalManana = 0, totalTarde = 0, totalNoche = 0;
    char turno[3][10] = {"Mañana", "Tarde", "Noche"};

    printf("Ingrese la cantidad de días del mes: ");
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        for (j = 0; j < 3; j++) {
            printf("Ingrese el precio del pan para el turno %s del día %d: ", turno[j], i + 1);
            scanf("%f", &precio);
            printf("Ingrese la cantidad vendida (en kilos) para el turno %s del día %d: ", turno[j], i + 1);
            scanf("%f", &cantidad);
            monto = precio * cantidad;
            switch (j) {
                case 0:
                    totalManana += monto;
                    break;
                case 1:
                    totalTarde += monto;
                    break;
                case 2:
                    totalNoche += monto;
                    break;
            }
            printf("Monto del turno %s del día %d: %.2f\n", turno[j], i + 1, monto);
        }
    }

    printf("Monto total por turno:\n");
    printf("Mañana: %.2f\n", totalManana);
    printf("Tarde: %.2f\n", totalTarde);
    printf("Noche: %.2f\n", totalNoche);

    calcularPorcentaje(totalManana + totalTarde + totalNoche, totalManana, "Mañana");
    calcularPorcentaje(totalManana + totalTarde + totalNoche, totalTarde, "Tarde");
    calcularPorcentaje(totalManana + totalTarde + totalNoche, totalNoche, "Noche");

    return 0;
}

void calcularPorcentaje(float total, float monto, char turno[]) {
    float porcentaje = (monto / total) * 100;
    printf("El monto del turno %s representa el %.2f%% del monto total.\n", turno, porcentaje);
}
