#include <stdio.h>  // Incluir la librería estándar de entrada y salida

main(void) 
{  

    int n, i, a[50], aux, b;  
    printf("Ingrese el orden del vector: ");  
    scanf("%d", &n);  // Leer el tamaño del vector desde el usuario

    // Ciclo para ingresar valores al vector
    for (i = 0; i < n; i++) 
    {
        printf("\n a[%d]= ", i);  
        scanf("%d", &a[i]);  
    }

    do {
        b = 0; // Inicializar una variable "b" para rastrear si se realizaron intercambios en el ciclo
        
        // Ciclo para comparar y ordenar los elementos del vector
        for (i = 0; i < n - 1; i++) 
        {
            if (a[i] > a[i + 1]) 
            {  // Si el elemento actual es mayor que el siguiente
                aux = a[i];  // Almacenar el valor actual en una variable auxiliar
                a[i] = a[i + 1];  // Reemplazar el valor actual con el valor siguiente
                a[i + 1] = aux;  // Almacenar el valor siguiente en el lugar del valor actual
                b = 1;  // Indicar que se realizó al menos un intercambio en esta pasada
            }
        }
    } while (b == 1);  // Repetir el ciclo mientras se realicen intercambios

    printf("\nEl vector ordenado es:\n");  // Mostrar mensaje
    // Ciclo para imprimir el vector ordenado
    for (i = 0; i < n; i++) {
        printf("\n a[%d]= %d\n", i, a[i]);  // Mostrar el valor en la posición i del vector
    }
}
