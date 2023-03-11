/*

Realizar un programa que solicite la carga por teclado de dos números, 
 <<< Si el primero es mayor al segundo informar su suma y diferencia, 
 <<< En caso contrario informar el producto y la división del primero respecto al segundo.

*/

int main(){

    //Declaracion y lectura de variables iniciales
    int num1 , num2; 
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);
    int producto = num1 * num2;
    float div = (float)num1 / num2;
    int suma = num1 + num2;
    int resta = num1 - num2;

    //Funcionalidad
    switch (num1 > num2)
    {
    case 1:
        printf("La suma es %d", suma);
        printf("\nLa resta es %d", resta);
        break;
    
    default: //Si no se cumple la condicion anterior se ejecuta esta
        printf("El producto es %d", producto);
        printf("\nLa division es %f", div);
        break;
    }
    
    return 0;
}
