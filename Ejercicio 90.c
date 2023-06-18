/*
Escribir un programa en C que solicite al usuario ingresar dos números enteros y 
luego llame a una función que devuelva el producto, suma, division 
y potencia individual de esos dos números. 
El programa deberá imprimir el resultado en pantalla.
*/

int calcGen(int num1, int num2)
    {   
        //Uso variables secundarias simples
        int suma = num1 + num2;
        int producto = num1 * num2;
        int potencia1 = num1 * num1;
        int potencia2 = num2 * num2;
        float div = num1 / num2; //Para la division uso un dato de tipo flotante

        printf("La suma de ambos numeros es: %d\n",suma);
        printf("El producto de ambos numeros es: %d",producto);
        printf("\nLa potencia del primer numero es: %d", potencia1);
        printf("\nLa potencia del segundo numero es: %d", potencia2);
        printf("\nLa division entre ambos numeros es: %0.2f", div);
    }

int main(int argc, char const *argv[])
{   
    //Defino los 2 parametros de la funcion 
    int num1;
    int num2;
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);
    calcGen(num1, num2);//Llamo la funcion definida previamente
    return 0;
}



