#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 5
#define DAYS_IN_WEEK 5

struct VentaSemanal {
    float ventas[DAYS_IN_WEEK];
};

struct Empleado {
    char apellidoNombre[50];
    int numeroDocumento;
    char fechaIngreso[20];
    struct VentaSemanal ventasSemanales;
};

void registrarVenta(struct Empleado empleados[], int numEmpleados) {
    char nombreBuscado[50];
    char diaVenta[20];
    float montoVenta;

    printf("Ingrese el nombre del empleado: ");
    scanf(" %[^\n]s", nombreBuscado);

    int empleadoEncontrado = 0;

    for (int i = 0; i < numEmpleados; i++) {
        if (strcmp(empleados[i].apellidoNombre, nombreBuscado) == 0) {
            printf("Ingrese el día de la venta (Lunes, Martes, Miércoles, Jueves, Viernes): ");
            scanf(" %[^\n]s", diaVenta);

            if (strcmp(diaVenta, "Lunes") == 0) {
                printf("Ingrese el monto de la venta: ");
                scanf("%f", &montoVenta);
                empleados[i].ventasSemanales.ventas[0] += montoVenta;
                empleadoEncontrado = 1;
            } else if (strcmp(diaVenta, "Martes") == 0) {
                printf("Ingrese el monto de la venta: ");
                scanf("%f", &montoVenta);
                empleados[i].ventasSemanales.ventas[1] += montoVenta;
                empleadoEncontrado = 1;
            } else if (strcmp(diaVenta, "Miércoles") == 0) {
                printf("Ingrese el monto de la venta: ");
                scanf("%f", &montoVenta);
                empleados[i].ventasSemanales.ventas[2] += montoVenta;
                empleadoEncontrado = 1;
            } else if (strcmp(diaVenta, "Jueves") == 0) {
                printf("Ingrese el monto de la venta: ");
                scanf("%f", &montoVenta);
                empleados[i].ventasSemanales.ventas[3] += montoVenta;
                empleadoEncontrado = 1;
            } else if (strcmp(diaVenta, "Viernes") == 0) {
                printf("Ingrese el monto de la venta: ");
                scanf("%f", &montoVenta);
                empleados[i].ventasSemanales.ventas[4] += montoVenta;
                empleadoEncontrado = 1;
            } else {
                printf("Día incorrecto. Por favor, ingrese un día válido.\n");
            }
        }
    }

    if (!empleadoEncontrado) {
        printf("Empleado no encontrado.\n");
    }
}

void listarVentas(struct Empleado empleados[], int numEmpleados) {
    printf("Lista de ventas y monto total vendido por cada empleado:\n");

    for (int i = 0; i < numEmpleados; i++) {
        printf("Empleado: %s\n", empleados[i].apellidoNombre);
        for (int j = 0; j < DAYS_IN_WEEK; j++) {
            printf("Venta del día %d: %.2f\n", j + 1, empleados[i].ventasSemanales.ventas[j]);
        }

        float montoTotal = 0;
        for (int j = 0; j < DAYS_IN_WEEK; j++) {
            montoTotal += empleados[i].ventasSemanales.ventas[j];
        }
        printf("Monto total vendido: %.2f\n", montoTotal);
    }
}

int main() {
    struct Empleado empleados[MAX_EMPLOYEES];
    int opcion, numEmpleados = 0;

    do {
        printf("\nMenú de opciones:\n");
        printf("1. Registrar empleado\n");
        printf("2. Registrar venta\n");
        printf("3. Listar ventas\n");
        printf("4. Salir\n");
        printf("Elija una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                if (numEmpleados < MAX_EMPLOYEES) {
                    printf("Ingrese los datos del empleado %d:\n", numEmpleados + 1);
                    printf("Apellido y Nombre: ");
                    scanf(" %[^\n]s", empleados[numEmpleados].apellidoNombre);
                    printf("Número de Documento: ");
                    scanf("%d", &empleados[numEmpleados].numeroDocumento);
                    printf("Fecha de Ingreso (o de contrato): ");
                    scanf(" %[^\n]s", empleados[numEmpleados].fechaIngreso);
                    for (int i = 0; i < DAYS_IN_WEEK; i++) {
                        empleados[numEmpleados].ventasSemanales.ventas[i] = 0.0;
                    }
                    numEmpleados++;
                } else {
                    printf("No se pueden registrar más empleados.\n");
                }
                break;

            case 2:
                if (numEmpleados > 0) {
                    registrarVenta(empleados, numEmpleados);
                } else {
                    printf("No hay empleados registrados.\n");
                }
                break;

            case 3:
                if (numEmpleados > 0) {
                    listarVentas(empleados, numEmpleados);
                } else {
                    printf("No hay empleados registrados.\n");
                }
                break;

            case 4:
                printf("Saliendo del programa.\n");
                break;

            default:
                printf("Opción no válida. Por favor, elija una opción válida.\n");
        }
    } while (opcion != 4);

    return 0;

}

