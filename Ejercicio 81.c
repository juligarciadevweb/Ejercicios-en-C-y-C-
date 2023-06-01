/*
En un colegio se ingresa la calificación final obtenida por cada alumno de un curso. 
El proceso se repite mientras la calificación final ingresada sea diferente a cero. 
Finalizado el ingreso deberá mostrar el promedio de las notas ingresadas 
y cuál fue la mayor nota obtenida

*/


int main()
{
    int caliFin = 0;
    int suma = 0;
    int cantCali = 0;
    float promedio;
    int mayorNota = 0;

    printf("Ingrese la calificacion final obtenida por el alumno (0 para terminar): ");
    scanf("%d", &caliFin);

    while (caliFin != 0)
    {
        suma += caliFin;
        cantCali++;

        if (caliFin > mayorNota)
        {
            mayorNota = caliFin;
        }

        printf("Ingrese la calificacion final obtenida por el alumno (0 para terminar): ");
        scanf("%d", &caliFin); //Vuelvo a leer la nota para repetir el ciclo
    }

    if (cantCali > 0)
    {
        promedio = (float)suma / cantCali;

        printf("El promedio es: %.2f\n", promedio);
        printf("La mayor nota obtenida es: %d\n", mayorNota);
    }
    else
    {
        printf("No se ingresaron calificaciones\n");
    }

    return 0;
}





