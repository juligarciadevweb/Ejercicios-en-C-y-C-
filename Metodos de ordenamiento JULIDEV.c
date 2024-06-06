#include <stdio.h>

// Función que imprime un arreglo
void imprimir(int arr[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Función que ordena un arreglo usando Bubble Sort
void bubbleSort(int arr[], int tam)
{
    for (int i = 0; i < tam - 1; i++)
    {
        for (int j = 0; j < tam - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Función que ordena un arreglo usando Selection Sort
void selectionSort(int arr[], int tam)
{
    for (int i = 0; i < tam - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < tam; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

// Función que ordena usando Insertion Sort
void insertionSort(int arr[], int tam)
{
    for (int i = 1; i < tam; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Función Quick Sort
void quickSort(int arr[], int izq, int der)
{
    int i = izq;
    int j = der;
    int pivote = arr[(izq + der) / 2];
    while (i <= j)
    {
        while (arr[i] < pivote)
        {
            i++;
        }
        while (arr[j] > pivote)
        {
            j--;
        }
        if (i <= j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }

    if (izq < j)
        quickSort(arr, izq, j);

    if (i < der)
        quickSort(arr, i, der);
}

int main()
{
    int opc;
    int tam;

    printf("Ingrese la cantidad de numeros: ");
    scanf("%d", &tam);

    int arreglo[tam];
    int arregloOriginal[tam];

    printf("Ingrese los numeros:\n");
    for (int i = 0; i < tam; i++)
    {
        scanf("%d", &arreglo[i]);
        arregloOriginal[i] = arreglo[i];
    }

    do
    {
        printf("MENU DE ORDENAMIENTO\n");
        printf("---------------------\n");
        printf("1. Bubble Sort\n");
        printf("2. Selection Sort\n");
        printf("3. Insertion Sort\n");
        printf("4. Quick Sort\n");
        printf("0. Salir\n");
        printf("Ingrese una opcion: ");
        scanf("%d", &opc);

        switch (opc)
        {
        case 1:
            bubbleSort(arreglo, tam);
            printf("Arreglo ordenado con Bubble Sort: ");
            imprimir(arreglo, tam);
            break;

        case 2:
            selectionSort(arreglo, tam);
            printf("Arreglo ordenado con Selection Sort: ");
            imprimir(arreglo, tam);
            break;

        case 3:
            insertionSort(arreglo, tam);
            printf("Arreglo ordenado con Insertion Sort: ");
            imprimir(arreglo, tam);
            break;

        case 4:
            quickSort(arreglo, 0, tam - 1);
            printf("Arreglo ordenado con Quick Sort: ");
            imprimir(arreglo, tam);
            break;

        case 0:
            printf("Saliendo del programa.\n");
            break;

        default:
            printf("Opcion no valida. Intente de nuevo.\n");
            break;
        }

        for (int i = 0; i < tam; i++)
            arreglo[i] = arregloOriginal[i];

    } while (opc != 0);

    return 0;
}
