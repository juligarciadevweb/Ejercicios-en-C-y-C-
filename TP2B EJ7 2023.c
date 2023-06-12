#include <stdio.h>

int main() {
    int pacientes;
    int x = 0;
    int contA = 0; // Si se cumplen las 2 condiciones, edad > 58 y padece gripe estacional o gripe A
    int contB = 0; // Sexo masculino o femenino que padecen gripe estacional
    int contMasc = 0; // Contador de pacientes masculinos
    int contFem = 0; // Contador de pacientes femeninas
    int estacional = 0; // Contador de gripe estacional
    int gripeA = 0; // Contador de gripe A
    int neumo = 0; // Contador de neumonia
    int bronquitis = 0; // Contador de bronquitis

    printf("Ingrese el número de pacientes con los que vamos a trabajar: ");
    scanf("%d", &pacientes);
    
    while (x < pacientes) {
        int edad;
        printf("Ingrese la edad: ");
        scanf("%d", &edad);
        
        int sexo;
        printf("Ingrese el sexo: 1 para masculino, 2 para femenino: ");
        scanf("%d", &sexo);
        
        int patologia;
        printf("0 = Gripe Estacional, 1 = Gripe A, 2 = Neumonía, 3 = Bronquitis: ");
        scanf("%d", &patologia);

        switch (patologia) {
            case 0:
                estacional++;
                break;

            case 1:
                gripeA++;
                break;

            case 2:
                neumo++;
                break;

            case 3:
                bronquitis++;
                break;

            default:
                printf("Número inválido");
                break;
        }

        switch (sexo) {
            case 1:
                contMasc++;
                break;

            case 2:
                contFem++;
                break;

            default:
                printf("Número inválido");
                break;
        }

        if (edad > 58 && (patologia == 3 || patologia == 1)) {
            contA++;
        }

        if ((sexo == 1 || sexo == 2) && patologia == 0) {
            contB++;
        }

        x++;
    }

    printf("La cantidad de personas de sexo masculino mayores a 58 años que padecen Bronquitis o Gripe A es %d\n", contA);
    printf("La cantidad de personas de sexo femenino y masculino que padecen Gripe Estacional es %d\n", contB);

    return 0;
}
