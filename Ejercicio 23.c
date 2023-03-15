/*

Escribir un programa en el que se ingresen 4 numeros:
    Calcular y mostrar la suma de los 2 primeros
    Calcular y mostrar el producto del tercero y el cuarto

*/

int main(){
    int num1, num2, num3, num4;
    
    
    printf("Ingrese el primer numero: ");
        scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
        scanf("%d", &num2);
    printf("Ingrese el tercer numero: ");
        scanf("%d", &num3);
    printf("Ingrese el cuarto numero: ");
        scanf("%d", &num4);
    int suma = num1 + num2;
    int producto = num3 * num4;
    printf("La suma de los 2 primeros es: %d", suma);
    printf("\nEl producto del tercer y el cuarto es: %d", producto);
  
    return 0;
}
