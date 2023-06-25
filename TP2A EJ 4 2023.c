/*
Un alumno desea saber su nota final en una materia integradora, que tienen en cuenta las
calificaciones de otras dos asignaturas.
Dicha nota se compone de:
a. 20% del promedio de dos notas de la primera Asignatura.
b. 30% del promedio de dos notas de la segunda Asignatura.
c. 50% de la nota del Trabajo Final Integrador.

*/
#include <stdio.h>

int main() {
    float notaAsignatura1_1, notaAsignatura1_2;
    float notaAsignatura2_1, notaAsignatura2_2;
    float notaTrabajoFinal;

    printf("Ingrese las dos notas de la primera Asignatura: ");
    scanf("%f %f", &notaAsignatura1_1, &notaAsignatura1_2);

    printf("Ingrese las dos notas de la segunda Asignatura: ");
    scanf("%f %f", &notaAsignatura2_1, &notaAsignatura2_2);

    printf("Ingrese la nota del Trabajo Final Integrador: ");
    scanf("%f", &notaTrabajoFinal);

    float promedioAsignatura1 = (notaAsignatura1_1 + notaAsignatura1_2) / 2.0;
    float promedioAsignatura2 = (notaAsignatura2_1 + notaAsignatura2_2) / 2.0;

    float notaFinal = 0.2 * promedioAsignatura1 + 0.3 * promedioAsignatura2 + 0.5 * notaTrabajoFinal;

    printf("La nota final en la materia integradora es: %.2f\n", notaFinal);

    return 0;
}
