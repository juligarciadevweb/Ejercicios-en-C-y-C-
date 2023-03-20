/*

Desarrollar un programa que permita la carga de 10 valores por teclado y nos muestre posteriormente la suma de los valores ingresados y su promedio.

*/

int main(){
    int suma, valor;
    int x = 1;
    while (x <= 10) //Se piden hasta 10 valores
    {
        printf("Ingrese un valor: ");
        scanf("%d", &valor);
        suma = suma + valor; 
        x = x + 1;
    }
    printf("La suma de los numeros es %d", suma);
    int promedio = suma/10;
    printf("\nEl promedio de los numeros es %d", promedio);
    return 0;
}
