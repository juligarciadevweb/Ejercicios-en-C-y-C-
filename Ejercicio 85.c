/*
Ingresar el valor de Kw el consumo electrico de una casa.
Se pide: 
    Mostrar un mensaje "No tiene consumo" si el consumo es igual a 0
    Se descuenta un 5% para consumos menores a 350kw
    Mostrar lo que debe pagar el usuario
*/

#include <stdio.h>

int main()
{
    float valor;
    float consumo;
    
    printf("Ingrese el valor del kW: ");
    scanf("%f", &valor);
    
    printf("Ingrese el consumo de la casa en kW: ");
    scanf("%f", &consumo);
    
    if (consumo == 0)
    {
        printf("No tiene consumo\n");
    }
    else
    {
        float precio = valor * consumo;
        
        if (consumo < 350)
        {
            float descuento = precio * 0.05;
            float total = precio - descuento;
            
            printf("Descuento aplicado: %.2f\n", descuento);
            printf("Total a pagar con descuento: %.2f\n", total);
        }
        else
        {
            printf("Total a pagar: %.2f\n", precio);
        }
    }
    
    return 0;
}
