/*

Escribir un programa para sumar los números consecutivos entre 0 y n, siendo n un número ingresado por el usuario. 
Mostrar el resultado en la función main ().

*/

int sumaMayores(int a){
    int suma = 0;
    for(int i=1; i<=a; i++) {
        suma += i;
    }
    return suma;
}

int main()
{
    int a;
    printf("Ingrese el valor de a: ");
    scanf("%d", &a);
    int resultado = sumaMayores(a);
    printf("La suma de los numeros consecutivos entre 0 y %d es: %d\n", a, resultado);
    return 0;
}
