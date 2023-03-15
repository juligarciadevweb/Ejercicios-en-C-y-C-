/*

Ingrese N coordenadas de puntos en el plano, dos variables X, Y.

Indique :

  Si dicho punto  se encuentra dentro o fuera del cuadrado.

  Cuántos puntos están dentro del cuadrado.

  Porcentaje de puntos fuera del cuadrado

*/

#include <stdio.h>

int main() {
    // Ingresar número de puntos
    int n;
    printf("Ingrese el número de puntos: ");
    scanf("%d", &n);

    // Inicializar contadores
    int dentro = 0;
    int fuera = 0;

    // Ciclo para ingresar las coordenadas de cada punto
    for (int i = 0; i < n; i++) {
        float x, y;
        printf("Ingrese las coordenadas del punto %d: ", i+1);
        scanf("%f %f", &x, &y);

        // Comprobar si el punto está dentro o fuera del cuadrado
        if (x >= -1 && x <= 1 && y >= -1 && y <= 1) {
            dentro++;
        } else {
            fuera++;
        }
    }

    // Calcular el porcentaje de puntos fuera del cuadrado
    float porcentaje_fuera = (float)fuera / n * 100;

    // Mostrar resultados
    printf("Total de puntos: %d\n", n);
    printf("Puntos dentro del cuadrado: %d\n", dentro);
    printf("Puntos fuera del cuadrado: %d\n", fuera);
    printf("Porcentaje de puntos fuera del cuadrado: %.2f%%\n", porcentaje_fuera);

    return 0;
}

