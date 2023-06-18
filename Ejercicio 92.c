                            //REDEFINICION
/*
En un video club se administra los datos de los N socios: Edad, 
Deporte que realiza (1=Futbol, 2= Natación, 3 = jockey) y Sexo (1 = Masculinos, 2 = Femeninos).
Se desea saber:
    a) Cuantos socios entre la edad de 30 y 50 años practican futbol.
    b) Cuantos socios femeninos tiene el club y cuantos masculinos.
    c) Cuantos socios son menores de 16 años    
*/

#include <stdio.h>

int functionA(int edad, int dep) {
    int a1 = 0;
    if (edad > 30 && edad < 50 && dep == 1) {
        a1++;
    }
    return a1;
}

void functionB(int sex, int* contMasc, int* contFem) {
    switch (sex) {
        case 1:
            (*contMasc)++;
            break;

        case 2:
            (*contFem)++;
            break;

        default:
            printf("Número de sexo inválido\n");
            break;
    }
}

int functionC(int edad) {
    if (edad < 16) {
        return 1;
    }
    return 0;
}

int main() {
    int socios;
    printf("Ingrese la cantidad de socios que cargará: ");
    scanf("%d", &socios);

    int contFutbol = 0;
    int contMasc = 0;
    int contFem = 0;
    int contMenores = 0;

    for (int i = 0; i < socios; i++) 
    {
        int edad, sexo, deporte;
        printf("Ingrese la edad del socio: ");
        scanf("%d", &edad);
        printf("Ingrese el sexo del socio (1 para masculino, 2 para femenino): ");
        scanf("%d", &sexo);
        printf("Ingrese el deporte que practica el socio (1=Fútbol, 2=Natación, 3=Jockey): ");
        scanf("%d", &deporte);

        // Llamada a las funciones
        contFutbol += functionA(edad, deporte);
        functionB(sexo, &contMasc, &contFem);
        contMenores += functionC(edad);
    }

    printf("Cantidad de socios entre 30 y 50 años que practican fútbol: %d\n", contFutbol);
    printf("Cantidad de socios masculinos: %d\n", contMasc);
    printf("Cantidad de socios femeninos: %d\n", contFem);
    printf("Cantidad de socios menores de 16 años: %d\n", contMenores);

    return 0;
}

