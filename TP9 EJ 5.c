/*

Dada la siguiente configuración de un registro:

 Código
 Importe

a) Inicializar una estructura de cola.
b) Ingresar n valores.
c) Borrar un valor.
d) Mostrar los datos de los artículos que quedan.

*/

#include <stdio.h>
#include <stdlib.h>

// Estructura para el registro de código e importe
struct Registro {
    int codigo;
    float importe;
};

// Estructura para la cola
struct Cola {
    struct Registro dato;
    struct Cola *siguiente;
};

// Función para agregar un elemento a la cola
void encolar(struct Cola **inicio, struct Cola **fin, struct Registro dato) {
    struct Cola *nuevoElemento = (struct Cola *) malloc(sizeof(struct Cola));
    nuevoElemento->dato = dato;
    nuevoElemento->siguiente = NULL;
    if (*inicio == NULL) {
        *inicio = nuevoElemento;
    } else {
        (*fin)->siguiente = nuevoElemento;
    }
    *fin = nuevoElemento;
}

// Función para eliminar un elemento de la cola
void desencolar(struct Cola **inicio, struct Cola **fin) {
    if (*inicio == NULL) {
        printf("La cola está vacía\n");
    } else {
        struct Cola *temp = *inicio;
        *inicio = (*inicio)->siguiente;
        free(temp);
        if (*inicio == NULL) {
            *fin = NULL;
        }
    }
}

// Función para mostrar los datos de los artículos que quedan en la cola
void mostrarCola(struct Cola *inicio) {
    if (inicio == NULL) {
        printf("La cola está vacía\n");
    } else {
        printf("Elementos en la cola:\n");
        while (inicio != NULL) {
            printf("Código: %d, Importe: %f\n", inicio->dato.codigo, inicio->dato.importe);
            inicio = inicio->siguiente;
        }
    }
}

// Función principal
int main() {
    struct Cola *inicio = NULL;
    struct Cola *fin = NULL;
    int n;
    printf("Ingrese la cantidad de elementos a ingresar: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        struct Registro nuevoRegistro;
        printf("Ingrese el código del artículo %d: ", i + 1);
        scanf("%d", &nuevoRegistro.codigo);
        printf("Ingrese el importe del artículo %d: ", i + 1);
        scanf("%f", &nuevoRegistro.importe);
        encolar(&inicio, &fin, nuevoRegistro);
    }
    mostrarCola(inicio);
    desencolar(&inicio, &fin);
    mostrarCola(inicio);
    return 0;
}
