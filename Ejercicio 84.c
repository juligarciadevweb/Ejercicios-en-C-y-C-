/*
Escribe un programa que solicite al usuario ingresar números enteros positivos 
y calcule la suma de todos los números ingresados. 
La carga de números finaliza cuando se ingresa un número negativo. 
Luego, muestra la suma de los números ingresados.
*/

int main(int argc, char const *argv[])
{
    int suma = 0;
    int num;
    do
    {
        printf("Ingrese el numero: ");
        scanf("%d", &num);
        suma += num;
    } while (num > 0);
    
    printf("La suma es: %d", suma);
    return 0;
}
