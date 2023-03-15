/*

Una compañía que posee N camiones de transporte almacena la siguiente información de los mismos: 1) Patente 2) Destino 3) Valor en pesos de la carga.

Se pide:

a) Crear y cargar la información en un archivo e indicar la patente y destino del camión con mayor valor de carga.

b) Calcular a través de una función con tipo el porcentaje de camiones cuyo valor de carga supera los 50000, mostrar el resultado en main.

*/

#include <stdio.h>

// Prototipo de la función de carga de datos
void cargarDatos(int m, int n, float distancias[m][n]);

// Prototipo de la función para calcular el repartidor con la mayor distancia promedio
int repartidorMayorDistanciaPromedio(int m, int n, float distancias[m][n]);

int main() {
    int m, n, repartidor;
    printf("Ingrese el número de repartidores: ");
    scanf("%d", &m);
    printf("Ingrese el número de entregas: ");
    scanf("%d", &n);

    float distancias[m][n];

    // Carga de datos de la matriz
    cargarDatos(m, n, distancias);

    // Cálculo del repartidor con la mayor distancia promedio
    repartidor = repartidorMayorDistanciaPromedio(m, n, distancias);

    printf("El repartidor con la mayor distancia promedio es el número %d.\n", repartidor);

    return 0;
}

void cargarDatos(int m, int n, float distancias[m][n]) {
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            // Validación de que la distancia es mayor a cero
            do {
                printf("Ingrese la distancia recorrida por el repartidor %d en la entrega %d: ", i + 1, j + 1);
                scanf("%f", &distancias[i][j]);
            } while (distancias[i][j] <= 0);
        }
    }
}

int repartidorMayorDistanciaPromedio(int m, int n, float distancias[m][n]) {
    int i, j, repartidor;
    float mayorPromedio = 0, promedio;
    for (i = 0; i < m; i++) {
        promedio = 0;
        for (j = 0; j < n; j++) {
            promedio += distancias[i][j];
        }
        promedio /= n;
        if (promedio > mayorPromedio) {
            mayorPromedio = promedio;
            repartidor = i + 1;
        }
    }
    return repartidor;
}




