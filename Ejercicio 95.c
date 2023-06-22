/*
En un video club se ofrece la promoción 
de llevarse 3 películas por el precio de las dos más baratas. 
Conociendo el precio de cada una de las películas, 
realice el diagrama de flujo que permita determinar la cantidad a pagar. 
Repetir este proceso hasta que se ingrese cero como valor en las 3 películas.
*/

#include <stdio.h>

int main()
{
    float pelicula1, pelicula2, pelicula3;
    
    do
    {
        printf("Ingrese el precio de la primera pelicula (0 para salir): ");
        scanf("%f", &pelicula1);
        
        if (pelicula1 != 0)
        {
            printf("Ingrese el precio de la segunda pelicula: ");
            scanf("%f", &pelicula2);
            
            printf("Ingrese el precio de la tercera pelicula: ");
            scanf("%f", &pelicula3);
            
            // Calcular el precio de las dos películas más baratas
            float precioTotal;
            if (pelicula1 <= pelicula2 && pelicula1 <= pelicula3)
            {
                precioTotal = pelicula1 + ((pelicula2 <= pelicula3) ? pelicula2 : pelicula3);
            }
            else if (pelicula2 <= pelicula1 && pelicula2 <= pelicula3)
            {
                precioTotal = pelicula2 + ((pelicula1 <= pelicula3) ? pelicula1 : pelicula3);
            }
            else
            {
                precioTotal = pelicula3 + ((pelicula1 <= pelicula2) ? pelicula1 : pelicula2);
            }
            
            printf("Cantidad a pagar: %.2f\n", precioTotal);
            printf("------------------------------\n");
        }
        
    } while (pelicula1 != 0);
    
    printf("Fin del programa.\n");
    
    return 0;
}


