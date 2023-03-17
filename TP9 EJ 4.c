/*

En un sistema se registra la información de los N programas en una estructura dinámica de pila
implementada dinámicamente,
 Nombre del programa
 Cantidad de líneas

a) Ingresar la información en la pila.
b) Borrar los datos de un programa.
c) Mostrar los datos.
d) Mostrar los datos de los programas registrados.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOMBRE 50

// Definición de la estructura Programa
typedef struct programa {
    char nombre[MAX_NOMBRE];
    int cantidad_lineas;
    struct programa *siguiente;
} Programa;

// Prototipos de las funciones
void push(Programa **pila, char nombre[], int cantidad_lineas);
void pop(Programa **pila, char nombre[]);
void mostrar(Programa *pila);
void mostrar_programas(Programa *pila);

// Función principal
int main() {
    int opcion;
    char nombre[MAX_NOMBRE];
    int cantidad_lineas;
    Programa *pila = NULL;

    do {
        // Menú de opciones
        printf("\n1. Ingresar programa");
        printf("\n2. Borrar programa");
        printf("\n3. Mostrar programas");
        printf("\n4. Salir");
        printf("\nIngrese una opcion: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                // Ingresar un programa
                printf("Ingrese el nombre del programa: ");
                scanf("%s", nombre);
                printf("Ingrese la cantidad de lineas: ");
                scanf("%d", &cantidad_lineas);
                push(&pila, nombre, cantidad_lineas);
                break;
            case 2:
                // Borrar un programa
                printf("Ingrese el nombre del programa a borrar: ");
                scanf("%s", nombre);
                pop(&pila, nombre);
                break;
            case 3:
                // Mostrar los programas
                mostrar(pila);
                break;
            case 4:
                // Salir
                break;
            default:
                printf("Opcion invalida\n");
        }
    } while(opcion != 4);

    // Liberar la memoria ocupada por la pila
    while(pila != NULL) {
        Programa *aux = pila;
        pila = pila->siguiente;
        free(aux);
    }

    return 0;
}

// Función para agregar un programa a la pila
void push(Programa **pila, char nombre[], int cantidad_lineas) {
    // Crear el nuevo nodo
    Programa *nuevo = (Programa *)malloc(sizeof(Programa));
    strcpy(nuevo->nombre, nombre);
    nuevo->cantidad_lineas = cantidad_lineas;

    // Agregar el nuevo nodo a la pila
    nuevo->siguiente = *pila;
    *pila = nuevo;

    printf("Programa agregado correctamente\n");
}

// Función para eliminar un programa de la pila
void pop(Programa **pila, char nombre[]) {
    Programa *aux = *pila;
    Programa *anterior = NULL;

    // Buscar el programa a eliminar
    while(aux != NULL && strcmp(aux->nombre, nombre) != 0) {
        anterior = aux;
        aux = aux->siguiente;
    }

    // Si se encontró el programa, eliminarlo
    if(aux != NULL) {
        // Si el programa es el primero de la pila
        if(anterior == NULL) {
            *pila = aux->siguiente;
        }
        else {
            anterior->siguiente = aux->siguiente;
        }

        free(aux);
        printf("Programa eliminado correctamente\n");
    }
    else {
        printf("No se encontro el programa\n
