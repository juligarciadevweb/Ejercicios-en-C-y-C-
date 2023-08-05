/* 
En una fábrica de envases de plásticos se desea procesar datos relacionado con su producción
mensual. El ingreso de lo producido por la empresa, se realiza por semana. Pudiendo haber semana
en que alguna de las maquinas no haya realizado producción.
Confeccionar un programa que lea él código de cada maquinas (1, 2, 3), la cantidad de
envases que produjo en la semana, la cantidad de envase que poseen falla y debieron desecharse.
: El ingreso de datos deberá finalizar cuando se ingresa como código de maquina el 0 (cero).
Tener en cuenta que a medida que se realiza la carga se irán realizando los cálculos para poder
mostrar al final de la carga lo que se pide.
El programa deberá informar al terminar la carga:
su número de identificación de cada máquina,
la cantidad total de envases producidos y
Creando una función con tipo calcular y devolver el porcentaje de envases desechadosrespecto al
total de envases que ha producido por las tres máquinas.

*/

#include <stdio.h>

// Función para calcular el porcentaje de envases desechados
float calcularPorcentajeDesechados(int producidos, int desechados) {
    if (producidos == 0) {
        return 0.0;  // Evitar división por cero
    }
    return ((float)desechados / producidos) * 100;
}

int main() {
    int codigoMaquina;
    int producidosMaquina1 = 0, desechadosMaquina1 = 0;
    int producidosMaquina2 = 0, desechadosMaquina2 = 0;
    int producidosMaquina3 = 0, desechadosMaquina3 = 0;

    while (1) {
        printf("Ingrese código de máquina (1, 2, 3) o 0 para finalizar: ");
        scanf("%d", &codigoMaquina);

        if (codigoMaquina == 0) {
            break;  // Finalizar el bucle si se ingresa 0
        }

        int producidos, desechados;
        printf("Ingrese cantidad de envases producidos: ");
        scanf("%d", &producidos);
        printf("Ingrese cantidad de envases desechados: ");
        scanf("%d", &desechados);

        switch (codigoMaquina) {
            case 1:
                producidosMaquina1 += producidos;
                desechadosMaquina1 += desechados;
                break;
            case 2:
                producidosMaquina2 += producidos;
                desechadosMaquina2 += desechados;
                break;
            case 3:
                producidosMaquina3 += producidos;
                desechadosMaquina3 += desechados;
                break;
            default:
                printf("Código de máquina inválido. Intente nuevamente.\n");
                continue;  // Saltar al siguiente ciclo
        }
    }

    // Calcular totales y porcentajes
    int totalProducidos = producidosMaquina1 + producidosMaquina2 + producidosMaquina3;
    int totalDesechados = desechadosMaquina1 + desechadosMaquina2 + desechadosMaquina3;
    float porcentajeDesechados = calcularPorcentajeDesechados(totalProducidos, totalDesechados);

    // Mostrar resultados
    printf("\nResultados:\n");
    printf("Máquina 1:\n");
    printf("  Total producidos: %d\n", producidosMaquina1);
    printf("  Total desechados: %d\n", desechadosMaquina1);
    printf("Máquina 2:\n");
    printf("  Total producidos: %d\n", producidosMaquina2);
    printf("  Total desechados: %d\n", desechadosMaquina2);
    printf("Máquina 3:\n");
    printf("  Total producidos: %d\n", producidosMaquina3);
    printf("  Total desechados: %d\n", desechadosMaquina3);
    printf("Total general de envases producidos: %d\n", totalProducidos);
    printf("Porcentaje de envases desechados: %.2f%%\n", porcentajeDesechados);

    return 0;
}
