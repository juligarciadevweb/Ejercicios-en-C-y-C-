/*

Un postulante a un empleo, que realizo un test de capacitación, se obtuvo la siguiente información:
• Cantidad total de preguntas realizadas
• Cantidad de preguntas contestadas correctamente.
se pide lo siguiente:
confeccionar un programa que lea los datos del postulante e informe el nivel del mismo según el
porcentaje de respuestas correctas que ha obtenido, Sabiendo que:
✓ Nivel Superior Porcentaje >= 90%
✓ Nivel Medio 75% <= Porcentaje < 90%
✓ Nivel Regular 50% <= Porcentaje < 75%

Busca la simplicidad

*/

int main(){
    int numPreguntas, pregCorrectas;
    printf("Ingrese la cantidad de preguntas realizadas: ");
    scanf("%d", &numPreguntas);

    printf("Ingrese la cantidad de preguntas respondidas correctamente: ");
    scanf("%d", &pregCorrectas);

    float porceFinal = (float) pregCorrectas / numPreguntas * 100;
    printf("El participante tuvo un porcentaje de %f ", porceFinal);

    if (porceFinal >= 90)
    {
        printf("\nNivel superior");
    }
    else if (porceFinal <= 75)
    {
        printf("\nNivel medio");
    }
    else if (porceFinal <= 50)
    {
        printf("\nNivel regular");
    } else {
        printf("\nNivel bajo");
    }

    return 0;
}
