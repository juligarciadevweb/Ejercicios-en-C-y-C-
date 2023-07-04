/*
Se ingresa un valor superior a 600, que representa una cantidad en minutos
realizar una función con tipo para mostrar en la función main.
I)Su equivalente en horas.
II) Su equivalente en minutos.
III) Su equivalente en segundo.
*/

#include <stdio.h>

void minutosySegundos(int value, float *horas, float *minutos, float *segundos)
{
    *horas = value / 60.0;
    *minutos = value;
    *segundos = value * 60.0;
}
/*
Utilizamos el operador * para acceder y 
modificar el contenido de las variables a las que apuntan los punteros
*/

int main()
{
    int value;
    printf("Ingrese un valor en minutos (mayor a 600): ");
    scanf("%d", &value);

    if (value > 600)
    {
        float horas, minutos, segundos;
        minutosySegundos(value, &horas, &minutos, &segundos);
        printf("Equivalente en horas: %f\n", horas);
        printf("Equivalente en minutos: %f\n", minutos);
        printf("Equivalente en segundos: %f\n", segundos);
    }
    else
    {
        printf("El valor ingresado debe ser mayor a 600.\n");
    }

    return 0;
}


