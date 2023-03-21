/*

TP3 problema 7

Se ingresan tres números Se pide mostrar por pantalla el resultado de la operación establecida
mientras se cumpla con lo siguiente:
✓ Cuando el primer número sea igual al segundo número ingresado, mostrar la suma de los
tres números ingresados
✓ Cuando el primer número sea menor al tercer número, mostrar el producto del primero
por el segundo.
✓ Cuando el segundo número sea mayor al primer número ingresado, mostrar la división
del segundo número con el primero. Tener en cuenta la división en cero

*/

int main(){
    int num1, num2, num3;
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);
    printf("Ingrese el tercer numero: ");
    scanf("%d", &num3);
    
    int suma = num1 + num2 + num3;
    int produ = num1 * num2;
    float div = (float) num2 / num1;
    if (num1 == num2)
    {
        printf("El resultado de la suma total es: %d", suma);
    }
    else if (num1 < num3)
    {
        printf("El producto de los 2 primeros numeros es: %d", produ);
    } 
    else if (num2 > num1)
    {
        printf("La division es %f", div);
    }
    
    return 0;
}
