/*

Desarrollo de un programa que muestre por medio
de un menú los diferentes la ejecución de los diferentes métodos en lenguaje C o C++ que realizan el
ordenamiento de los datos por medio de los métodos descriptos en la teoría.


*/

#include <iostream>
#include <algorithm> // Para std::sort

using namespace std;

// Función que imprime un arreglo
void imprimirArreglo(int arr[], int tam) {
    for (int i = 0; i < tam; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Función que ordena un arreglo usando Bubble Sort
void bubbleSort(int arr[], int tam) {
    for (int i = 0; i < tam - 1; i++) {
        for (int j = 0; j < tam - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Función que ordena un arreglo usando Selection Sort
void selectionSort(int arr[], int tam) {
    for (int i = 0; i < tam - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < tam; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

// Función que ordena un arreglo usando Insertion Sort
void insertionSort(int arr[], int tam) {
    for (int i = 1; i < tam; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Función que ordena un arreglo usando Quick Sort
void quickSort(int arr[], int izq, int der) {
    int pivote = arr[(izq + der) / 2];
    int i = izq;
    int j = der;
    while (i <= j) {
        while (arr[i] < pivote) {
            i++;
        }
        while (arr[j] > pivote) {
            j--;
        }
        if (i <= j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    if (izq < j) {
        quickSort(arr, izq, j);
    }
    if (i < der) {
        quickSort(arr, i, der);
    }
}

int main() {
    int opcion;
    int arreglo[] = {5, 2, 4, 6, 1, 3};
    int tam = sizeof(arreglo) / sizeof(arreglo[0]);
    do {
        cout << "MENU DE ORDENAMIENTO" << endl;
        cout << "---------------------" << endl;
        cout << "1. Bubble Sort" << endl;
        cout << "2. Selection Sort" << endl;
        cout << "3. Insertion Sort" << endl;
        cout << "4. Quick Sort" << endl;
        cout << "5. Sort de la biblioteca STL" << endl;
        cout << "0. Salir" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;
        switch (opcion) {
            case 1:
                bubbleSort(arreglo, tam);
                cout << "Arreglo ordenado con Bubble Sort: ";
               
