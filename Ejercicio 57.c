/*

Escribe un programa que solicite al usuario el número de estudiantes de un salón de clases 
y luego solicite sus notas. 
El programa deberá imprimir el promedio de las notas, 
la cantidad de estudiantes que aprobaron (notas mayores o iguales a 70) 
y la cantidad de estudiantes que reprobaron (notas menores a 70).

*/

int main(){
    int notas = 0, estudiantes, suma = 0, notMay = 0, notMen = 0, X = 1;
    float promedio;
    printf("Ingrese el numero de estudiantes: ");
    scanf("%d", &estudiantes);
    while (X <= estudiantes)
    {
        printf("Ingrese la nota: ");
        scanf("%d", &notas);
        if (notas >= 70)
        {
            notMay++;
        }
        else
        {
            notMen++;
        }
        suma += notas;
        X = X + 1;
    }
    promedio = (float)suma/estudiantes; //Forzamos el tipo de dato

    printf("El promedio es: %f", promedio);
    printf("Los estudiantes que sacaron notas mayores a 70 son %d", notMay);
    printf("Los estudiantes que sacaron notas menores a 70 son %d", notMen);
    
    return 0;
}
