 /*
 
Un médico registra la información de sus pacientes en una estructura dinámica de pila, que
posee los siguientes campos:
 Nombre
 Teléfono
 Edad 
 
 */ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 50

struct Paciente {
    char nombre[MAX_NAME_LENGTH];
    char telefono[15];
    int edad;
    struct Paciente *siguiente;
};

typedef struct Paciente Paciente;

Paciente *crearPaciente() {
    Paciente *nuevoPaciente = (Paciente*) malloc(sizeof(Paciente));
    nuevoPaciente->siguiente = NULL;
    return nuevoPaciente;
}

void ingresarPaciente(Paciente **tope) {
    Paciente *nuevoPaciente = crearPaciente();
    printf("Ingrese el nombre del paciente: ");
    fgets(nuevoPaciente->nombre, MAX_NAME_LENGTH, stdin);
    nuevoPaciente->nombre[strcspn(nuevoPaciente->nombre, "\n")] = 0; // Eliminamos el salto de línea
    printf("Ingrese el telefono del paciente: ");
    fgets(nuevoPaciente->telefono, 15, stdin);
    nuevoPaciente->telefono[strcspn(nuevoPaciente->telefono, "\n")] = 0; // Eliminamos el salto de línea
    printf("Ingrese la edad del paciente: ");
    scanf("%d", &nuevoPaciente->edad);
    getchar(); // Eliminamos el salto de línea que queda en el buffer después de ingresar la edad
    nuevoPaciente->siguiente = *tope;
    *tope = nuevoPaciente;
}

void mostrarPaciente(Paciente *paciente) {
    printf("Nombre: %s\n", paciente->nombre);
    printf("Telefono: %s\n", paciente->telefono);
    printf("Edad: %d\n", paciente->edad);
}

void buscarMayorEdad(Paciente *tope) {
    Paciente *pacienteMayorEdad = tope;
    while (tope != NULL) {
        if (tope->edad > pacienteMayorEdad->edad) {
            pacienteMayorEdad = tope;
        }
        tope = tope->siguiente;
    }
    printf("El paciente con mayor edad es:\n");
    mostrarPaciente(pacienteMayorEdad);
}

void eliminarPaciente(Paciente **tope) {
    Paciente *pacienteAEliminar = *tope;
    *tope = (*tope)->siguiente;
    free(pacienteAEliminar);
}

void mostrarPila(Paciente *tope) {
    printf("Los pacientes que quedaron en la pila son:\n");
    while (tope != NULL) {
        mostrarPaciente(tope);
        tope = tope->siguiente;
    }
}

int main() {
    Paciente *tope = NULL;
    int n;
    printf("Ingrese la cantidad de pacientes: ");
    scanf("%d", &n);
    getchar(); // Eliminamos el salto de línea que queda en el buffer después de ingresar la cantidad de pacientes
    for (int i = 0; i < n; i++) {
        ingresarPaciente(&tope);
    }
    buscarMayorEdad(tope);
    eliminarPaciente(&tope);
    mostrarPila(tope);
    return 0;
}
