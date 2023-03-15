/*
    Realizar un programa que lea 4 valores:
        Mostrar la suma y el promedio de los mismos
*/

int main(){
    int num1, num2, num3, num4;
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);
    printf("Ingrese el tercer numero: ");
    scanf("%d", &num3);
    printf("Ingrese el cuarto numero: ");
    scanf("%d", &num4);

    int suma = num1 + num2 + num3 + num4;
    int promedio = suma / 4;

    printf("La suma es: %d", suma);
    printf("\n El promedio es: %d", promedio);
    return 0;
}
