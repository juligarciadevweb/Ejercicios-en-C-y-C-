/*Ingresar N valores enteros positivos
  Finalizada la carga indicar
    Cantidad de pares
    Cantidad de impares
    Porcentaje de pares
    Porcentaje de impares*/

//Lo hare con un while

//#include <stdio.h>


int main() {
    int num;
    int cantNum;
    int contPar = 0;
    int contImp = 0;
    int sumaImp = 0;
    int sumaPar = 0;

    printf("Ingresa la cantidad de números: ");
    scanf("%d", &cantNum);

    int x = 0;
    while (x < cantNum) {
        printf("Ingrese un número: ");
        scanf("%d", &num);

        if (num % 2 == 0) {
            sumaPar += num;
            contPar++;
        } else {
            sumaImp += num;
            contImp++;
        }

        x++;
    }

    float promImp = contImp > 0 ? (float)sumaImp / contImp : 0.0;
    float promPar = contPar > 0 ? (float)sumaPar / contPar : 0.0;

    printf("La cantidad de pares es: %d\n", contPar);
    printf("La cantidad de impares es: %d\n", contImp);
    printf("El promedio de impares es: %.2f\n", promImp);
    printf("El promedio de pares es: %.2f\n", promPar);

    return 0;
}





