/*

Cree una estructura dinámica de lista, para almacenar la información de N empleados de una
fábrica de los cuales se debe guardar, la siguiente información:
 legajo
 apellido y nombre
 edad

a) Ingrese los datos de los empleados.
b) Borre la información de uno de ellos.
c) Muestre la información que quedó en la pila

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definición de la estructura Empleado
typedef struct Empleado {
    int legajo;
    char nombre[50];
    int edad;
    struct Empleado* siguiente;
} Empleado;

// Función para crear un nuevo empleado
Empleado* crearEmpleado(int legajo, char nombre[], int edad) {
    Empleado* nuevoEmpleado = (Empleado*) malloc(sizeof(Empleado));
    nuevoEmpleado->legajo = legajo;
    strcpy(nuevoEmpleado->nombre, nombre);
    nuevoEmpleado->edad = edad;
    nuevoEmpleado->siguiente = NULL;
    return nuevoEmpleado;
}

// Función para insertar un empleado al final de la lista
void insertarEmpleado(Empleado** lista, Empleado* empleado) {
    if (*lista == NULL) {
        *lista = empleado;
    } else {
        Empleado* ultimo = *lista;
        while (ultimo->siguiente != NULL) {
            ultimo = ultimo->siguiente;
        }
        ultimo->siguiente = empleado;
    }
}

// Función para eliminar un empleado de la lista por su legajo
void eliminarEmpleado(Empleado** lista, int legajo) {
    Empleado* actual = *lista;
    Empleado* anterior = NULL;
    while (actual != NULL && actual->legajo != legajo) {
        anterior = actual;
        actual = actual->siguiente;
    }
    if (actual == NULL) {
        printf("No se encontró el empleado con legajo %d\n", legajo);
        return;
    }
    if (anterior == NULL) {
        *lista = actual->siguiente;
    } else {
        anterior->siguiente = actual->siguiente;
    }
    printf("Empleado con legajo %d eliminado\n", legajo);
    free(actual);
}

// Función para mostrar la lista de empleados
void mostrarEmpleados(Empleado* lista) {
    Empleado* actual = lista;
    printf("Lista de empleados:\n");
    while (actual != NULL) {
        printf("Legajo: %d, Nombre: %s, Edad: %d\n", actual->legajo, actual->nombre, actual->edad);
        actual = actual->siguiente;
    }
}

int main() {
    int n;
    printf("Ingrese la cantidad de empleados: ");
    scanf("%d", &n);

    Empleado* listaEmpleados = NULL;

    // Ingreso de datos de los empleados
    for (int i = 0; i < n; i++) {
        int legajo, edad;
        char nombre[50];
        printf("Ingrese el legajo del empleado %d: ", i+1);
        scanf("%d", &legajo);
        printf("Ingrese el nombre y apellido del empleado %d: ", i+1);
        scanf("%s", nombre);
        printf("Ingrese la edad del empleado %d: ", i+1);
        scanf("%d", &edad);

        Empleado* nuevoEmpleado = crearEmpleado(legajo, nombre, edad);
        insertarEmpleado(&listaEmpleados, nuevoEmpleado);
    }

    // Mostrar lista de empleados
    mostrarEmpleados(listaEmpleados);

    // Eliminar un empleado
    int legajoEliminar;
    printf("Ingrese el legajo del empleado a eliminar: ");
    scanf("%d
