/*

1) Dado un conjunto de N valores reales. Los cuáles serán guardado en una estructura dinámica de
lista.

a) Ingresar N valores reales en una estructura de lista.
b) Una vez ingresados los datos en la lista, ordene de menor a mayor la lista.
c) Ingresar un valor X, si dicho valor se encuentra en la lista elimínelo.
d) Liste los elementos que quedaron en la lista.

*/


//A
#include <stdio.h>
#include <stdlib.h>

struct Node {
    float value;
    struct Node* next;
};

void addNode(struct Node** head, float value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->value = value;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}

int main() {
    int N;
    printf("Ingrese la cantidad de valores a ingresar: ");
    scanf("%d", &N);

    struct Node* head = NULL;
    for (int i = 0; i < N; i++) {
        float value;
        printf("Ingrese el valor #%d: ", i + 1);
        scanf("%f", &value);
        addNode(&head, value);
    }

    return 0;
}

//B

/*

Para ordenar la lista de menor a mayor, podemos utilizar el algoritmo de ordenamiento burbuja. 
Este algoritmo compara cada par de nodos adyacentes y los intercambia si no están en orden. 
Repite este proceso varias veces hasta que la lista esté completamente ordenada.

*/

void bubbleSort(struct Node* head) {
    int swapped = 1;
    while (swapped) {
        swapped = 0;
        struct Node* current = head;
        while (current->next != NULL) {
            if (current->value > current->next->value) {
                float temp = current->value;
                current->value = current->next->value;
                current->next->value = temp;
                swapped = 1;
            }
            current = current->next;
        }
    }
}

int main() {
    // ...
    bubbleSort(head);
    // ...
}

//C

/*

Para eliminar un valor X de la lista, primero debemos buscar el nodo que contiene ese valor. 
Si lo encontramos, eliminamos ese nodo de la lista. Si no lo encontramos, simplemente no hacemos nada.

*/

void deleteNode(struct Node** head, float value) {
    if (*head == NULL) {
        return;
    }

    if ((*head)->value == value) {
        struct Node* temp = *head;
        *head = (*head)->next;
        free(temp);
        return;
    }

    struct Node* current = *head;
    while (current->next != NULL && current->next->value != value) {
        current = current->next;
    }

    if (current->next != NULL) {
        struct Node* temp = current->next;
        current->next = current->next->next;
        free(temp);
    }
}

int main() {
    // ...
    float X;
   











