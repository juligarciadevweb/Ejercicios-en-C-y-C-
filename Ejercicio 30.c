/*

En una fabrica se registró por cada día de la semana y cada legajo del empleado la cantidad de horas trabajadas por cada uno de ellos; en una matriz de orden Mx N como la siguiente:

Se pide:

a) Cargar el arreglo con los datos de las horas trabajadas a través de una función.

b) Determinar a través de una función con tipo, el número de legajo que más horas trabajo.


*/

#include <stdio.h>
#define MAX_DIAS 7
#define MAX_EMPLEADOS 10

// Función para cargar los datos de las horas trabajadas
void cargarHorasTrabajadas(int horasTrabajadas[MAX_EMPLEADOS][MAX_DIAS], int numEmpleados) {
    for(int i=0; i<numEmpleados; i++) {
        printf("Ingrese las horas trabajadas para el empleado %d:\n", i+1);
        for(int j=0; j<MAX_DIAS; j++) {
            printf("Dia %d: ", j+1);
            scanf("%d", &horasTrabajadas[i][j]);
        }
    }
}

// Función para determinar el número de legajo que más horas trabajo
int numLegajoMasHorasTrabajadas(int horasTrabajadas[MAX_EMPLEADOS][MAX_DIAS], int numEmpleados) {
    int maxHoras = -1;
    int numLegajoMaxHoras = -1;
    for(int i=0; i<numEmpleados; i++) {
        int totalHoras = 0;
        for(int j=0; j<MAX_DIAS; j++) {
            totalHoras += horasTrabajadas[i][j];
        }
        if(totalHoras > maxHoras) {
            maxHoras = totalHoras;
            numLegajoMaxHoras = i+1;
        }
    }
    return numLegajoMaxHoras;
}

int main() {
    int horasTrabajadas[MAX_EMPLEADOS][MAX_DIAS];
    int numEmpleados;
    printf("Ingrese el número de empleados: ");
    scanf("%d", &numEmpleados);
    cargarHorasTrabajadas(horasTrabajadas, numEmpleados);
    int numLegajoMaxHoras = numLegajoMasHorasTrabajadas(horasTrabajadas, numEmpleados);
    printf("El número de legajo que más horas trabajó es: %d\n", numLegajoMaxHoras);
    return 0;
}






