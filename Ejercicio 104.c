/* Un Importador adquiere un bien en el extranjero y desea saber cuál será el precio de costo
final de importación, sabiendo que los gastos son:
a. Impuesto de Aduana: 25% para bienes con un valor declarado de U$S 2.000,00 o menor y de 30% para bienes hasta 2500000 
b. Flete desde el país de origen: U$S 600,00.
c. Seguro por daños o extravío: 10% del valor declarado del bien.
d. Los productos con valor entre 2500000 y 3000000 pagaran un impuesto de aduana de 40%
*/

//#include <stdio.h>

float incisoA(float precio, float seg, float flet)
    {
        float ad1 = precio * 0.25;//Impuesto de aduana 1
        float fin1 = precio + ad1 + seg + flet;
        return fin1;
    }

float incisoB(float precio, float seg, float flet)
    {
        float ad2 = precio * 0.30; //Impuesto de aduana 2
        float fin2 = precio + ad2 + seg + flet;
        return fin2;
    }

float incisoC(float precio, float seg, float flet)
    {
        float ad3 = precio * 0.40; //Impuesto de aduana 3
        float fin3 = precio + ad3 + seg + flet;
        return fin3;
    }

int main() 
{
    float precio;
    printf("Ingrese el valor del producto: ");
    scanf("%f", &precio);

    float flet = 3000;
    float seg = precio * 0.10; //Seguro
    
    if(precio <= 2000000)
    {
      float fin11 = incisoA(precio, seg, flet);
      printf("El precio final es %0.2f", fin11);
    }else if(precio > 2000000 && precio <= 2500000) 
    {
      float fin22 = incisoB(precio, seg, flet);
      printf("El precio final es %0.2f", fin22);
    } else
    {
      float fin33 = incisoC(precio, seg, flet);
      printf("El precio final es %0.2f", fin33);
    }

  return 0;
}