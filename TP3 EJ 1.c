/*

Ingresar 3 valores enteros positivos entre 1 y 10 que son valores que puede tener cada nota ingresada, si no cumple estas condiciones en cada nota el programa termina con un mensaje de error en la carga de las notas, en caso de que estén bien los valores ingresados se pide lo siguiente:
✓ Obtener el promedio del alumno y mostrar en pantalla.
✓ Si el promedio es menor a 6 mostrar un mensaje que el alumno no aprobó el año y deberá rendir en diciembre.
✓ Si el promedio es mayor o igual a 6 mostrar un mensaje indicando que el alumno aprobó

*/

int main() {
    int nota1, nota2, nota3;
    float promedio;

    printf("Ingrese la nota 1 (entre 1 y 10): ");
    scanf("%d", &nota1);

    printf("Ingrese la nota 2 (entre 1 y 10): ");
    scanf("%d", &nota2);

    printf("Ingrese la nota 3 (entre 1 y 10): ");
    scanf("%d", &nota3);

    if (nota1 < 1 || nota1 > 10 || nota2 < 1 || nota2 > 10 || nota3 < 1 || nota3 > 10) {
        printf("Error en la carga de notas. Las notas deben ser valores enteros entre 1 y 10.\n");
        return 0;
    }

    promedio = (nota1 + nota2 + nota3) / 3.0;

    printf("El promedio del alumno es: %.2f\n", promedio);

    if (promedio < 6) {
        printf("El alumno no aprobó el año y deberá rendir en diciembre.\n");
    } else {
        printf("El alumno aprobó el año.\n");
    }

    return 0;
}
