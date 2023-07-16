        //Funcion sin tipo con parametro por referencia
/*
Escribe un programa que tome un número entero N y 
dos límites de intervalo (A, B] en la función principal(main). 
Luego, crea una función llamada "verificar_intervalo" 
que tome el número entero N, el límite inferior A y 
el límite superior B como parámetros por valor.

Dentro de la función "verificar_intervalo", 
solicita al usuario que ingrese N números enteros uno por uno. 
La función deberá contar y mostrar la cantidad de valores que caen dentro del intervalo (A, B] 
y la cantidad de valores que caen fuera de ese intervalo.

Finalmente, regresa los resultados de la función "verificar_intervalo" 
a la función principal (main) y muestra los resultados obtenidos.
*/

void verificar_intervalo(int number, int value1, int value2, int *fuera, int *dentro)
{
    int num;
    for (int i = 0; i < number; i++)
    {   
        printf("Ingrese un numero: ");
        scanf("%d", &num);
        if (num > value1 && num < value2)
        {
            (*dentro)++;
        }else
        {
            (*fuera)++;
        }  
    }
}

int main(int argc, char const *argv[])
{
    int value1;
    int value2;
    int number = 0; //Numero de valores a ingresar
    int fuera = 0;//Contador de los numeros fuera del intervalo
    int dentro = 0;//Contador de numeros dentro del intervalo
    printf("Ingrese el limite inferior del intervalo: ");
    scanf("%d", &value1);    
    printf("Ingrese el limite superior del intervalo: ");
    scanf("%d", &value2);
    printf("Ingrese la cantidad de numeros que ingresara: ");
    scanf("%d", &number);

    verificar_intervalo(number, value1, value2, &fuera, &dentro);
    printf("Los numeros dentro del intervalo son: %d", dentro);
    printf("\nLos numeros fuera del intervalo son: %d", fuera);
    return 0;
}
