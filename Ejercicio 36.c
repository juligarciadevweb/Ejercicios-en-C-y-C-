/*

Escribir un programa que pida al usuario dos números enteros y compruebe si ambos números son mayores que cero. 
Si ambos números son mayores que cero, el programa debe mostrar un mensaje que diga "Ambos números son mayores que cero". 
De lo contrario, el programa debe mostrar un mensaje que diga "Al menos uno de los números no es mayor que cero".

*/

int main(){
    int number1, number2; 
    printf("Ingrese el primer numero: ");
    scanf("%d", &number1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &number2);
    if (number1 > 0 && number2 > 0)
    {
        printf("Ambos números son mayores que cero");
    }
    else
    {
        printf("Al menos uno de los números no es mayor que cero");
    }
    
    return 0;

}
