/*
Imagina que estás trabajando en una tienda en línea y tienes tres listas de productos: 
codigo, precios y inventario.

Cada lista contiene información sobre diferentes productos en el mismo orden. 

Escribe un algoritmo que recorra estas listas en paralelo 
y encuentre el codigo del producto más barato que también esté disponible en inventario. 
Luego, muestra el codigo y su precio.

*/
#include <stdio.h>

void encuentraProductoMasBarato(int n, int cod[100], int inv[100], float pre[100])
{
    int codigoMasBarato = -1; // Inicializamos con un valor inválido
    float precioMasBarato = 0.0; // Inicializamos con un valor inválido

    for (int i = 0; i < n; i++)
    {
        if (inv[i] > 0) // Verificamos si el producto está disponible en inventario
        {
            if (codigoMasBarato == -1 || pre[i] < precioMasBarato)
            {
                codigoMasBarato = cod[i];
                precioMasBarato = pre[i];
            }
        }
    }

    if (codigoMasBarato != -1)
    {
        printf("El producto más barato disponible es: Código %d, Precio $%.2f\n", codigoMasBarato, precioMasBarato);
    }
    else
    {
        printf("No hay productos disponibles en inventario.\n");
    }
}

int main()
{
    int n, cod[100], inv[100];
    float pre[100];

    printf("Ingrese la cantidad de elementos del vector: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Ingrese el código, inventario y precio del producto %d:\n", i + 1);
        scanf("%d %d %f", &cod[i], &inv[i], &pre[i]);
    }

    encuentraProductoMasBarato(n, cod, inv, pre);

    return 0;
}
