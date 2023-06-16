/*
Escribe un programa en C que solicite al usuario ingresar una serie de notas de estudiantes. El programa debe permitir ingresar las notas una por una, y cuando se ingrese el valor 0, 
se debe detener la carga de notas y calcular el promedio de las notas ingresadas.
*/

int main()
{
    int x = 0;
    int suma = 0;
    int n;
    do
    {
        printf("Ingrese la nota: ");
        scanf("%d", &n);
        suma += n;
        x++;
    } while (n != 0);
    
    float promedio = suma / x;

    printf("El promedio es: %0.2f", promedio);
    return 0;
}
