/*
Escribe un programa en C que permita registrar información sobre películas 
vistas por diferentes usuarios. 
Cada registro debe contener 
el género (por ejemplo, 0 para Drama, 1 para Comedia, 2 para Acción), 
la edad del usuario que la vio y su género (1 para Masculino y 2 para Femenino).

El programa debe solicitar al usuario ingresar los datos de N registros y 
luego mostrar el promedio de edades de los usuarios de género masculino 
y la cantidad de películas de género Drama vistas por usuarios de género femenino.

Usar una funcion con tipo y parametros a eleccion
*/

#include <stdio.h>

float pel(int n, int *contA, int *sumaEd, int *masc) {
    int edad;
    int genero;
    int sexo;
    int x = 0;
    while (x < n) {
        printf("Ingrese el genero de la pelicula (0 para Drama, 1 para Comedia, 2 para Acción): ");
        scanf("%d", &genero);
        printf("Ingrese la edad: ");
        scanf("%d", &edad);
        printf("Ingrese el sexo (1 para masculino y 2 para femenino): ");
        scanf("%d", &sexo);

        if (genero == 0 && sexo == 2) {
            (*contA)++;
        }

        if (sexo == 1) {
            (*sumaEd) += edad;
            (*masc)++;
        }

        x++;
    }
}

int main() {
    int contA = 0; // Drama y género femenino
    int sumEd = 0;
    int masc = 0;
    int n;

    printf("Ingrese la cantidad de usuarios: ");
    scanf("%d", &n);
    pel(n, &contA, &sumEd, &masc);

    float prom = 0.0;
    if (masc != 0) 
    {
        prom = (float)sumEd / masc;
    }

    printf("El promedio de edad es: %.2f\n", prom);
    printf("La cantidad de películas de género Drama vistas por usuarios de género femenino: %d\n", contA);

    return 0;
}
