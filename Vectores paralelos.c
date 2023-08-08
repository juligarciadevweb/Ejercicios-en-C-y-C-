/*
Ingresar los vectores cod, can y pre e indicar cual es el codigo del producto que posee el precio mas alto
*/

#include <stdio.h>

int main(int argc, char const *argv[]) 
{
    int n;
    int cod[50], can[50]; // Codigo y cantidad
    float pre[50]; // Precio exacto

    printf("Ingrese la cantidad de elementos del vector: ");
    scanf("%d", &n);

    float may = 0.00; // Inicializamos con un valor muy pequeño
    //Si guardamos el precio, vamos a usar la variable may como un dato de tipo flotante

    int pos = 0; // Variable para almacenar la posición del producto de mayor precio

    for (int i = 0; i < n; i++) 
    {
        //Cargamos los valores
        printf("\n cod[%d] = ", i); //Cargamos el codigo
        scanf("%d", &cod[i]);

        printf("\n can[%d] = ", i); //Cargamos la cantidad
        scanf("%d", &can[i]);

        printf("\n pre[%d] = ", i); //Cargamos el precio
        scanf("%f", &pre[i]);

        //Especificamos el codigo del mayor
        if (pre[i] > may) 
        {
            may = pre[i]; // Una vez encontrado el mayor guardo la posicion del elemento
            pos = i; // Actualizamos la posición del producto de mayor precio
        }
    }

    printf("El producto de mayor precio es: %d\n", cod[pos]); //pos me indica la posicion donde esta el mayor en el otro vector
    //Se aplica el paralelismo

    return 0;
}