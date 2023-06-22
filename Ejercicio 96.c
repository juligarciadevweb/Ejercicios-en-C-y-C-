/*
En un colegio se ingresa la calificación final obtenida por cada alumno de un curso. 
El proceso se repite mientras la calificación final ingresada sea menor a 10.
Finalizado el ingreso deberá mostrar el promedio de las notas ingresadas 
y cual fue la mayor nota obtenida.
*/

int main(int argc, char const *argv[])
{
    int x = 0; //Contador de la cantidad de notas
    int nota;
    int suma = 0;
    int mayor = 0;

    do
    {
        printf("Ingrese la nota: ");
        scanf("%d", &nota);
        suma += nota;

        if (nota != 0 && nota > mayor)
        {
            mayor = nota;
        }

        x++;
    } while (nota != 0);
    
    float promedio = suma / x ;
    printf("El promedio de las %d notas es %0.2f ",x, promedio);
    printf("\n");
    printf("La nota mayor es: %d", mayor);
    return 0;
}

