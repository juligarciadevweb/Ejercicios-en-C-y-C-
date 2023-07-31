#include <stdio.h>

// Función sin tipo para calcular el consumo para cada usuario
void calcular_consumo(int a, int b, int* c) {
    *c = a - b;
}

int main() {
    int n, m, la, lb;
    int total = 0;

    printf("Ingrese el numero de medidor (0 para terminar): ");
    scanf("%d", &m);

    while (m != 0) {
        printf("Ingrese la lectura actual y anterior para el medidor %d: ", m);
        scanf("%d %d", &la, &lb);

        int consumo;
        calcular_consumo(la, lb, &consumo);

        total += consumo;

        printf("Consumo del usuario %d: %d\n", m, consumo);

        printf("Ingrese el numero de medidor (0 para terminar): ");
        scanf("%d", &m);
    }

    printf("Consumo total de todos los usuarios: %d\n", total);

    return 0;
}
