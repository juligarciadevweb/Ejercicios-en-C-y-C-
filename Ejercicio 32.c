/*

Se registran en una matriz de orden M x N las distancias recorridas, en kilómetros, por M reparti- dores de Delivery (filas) en cada una de las N entregas realizadas (columnas).

Se pide:

a) A través de una función SIN TIPO, realice la carga de los datos de la matriz, validando que
cada celda registre una distancia recorrida mayor a cero.

b) Utilizando una función CON TIPO, determine cual fue el repartidor que recorrió la mayor distancia promedio. Muestre el resultado en la función main.

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


