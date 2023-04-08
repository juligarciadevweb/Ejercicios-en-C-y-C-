/*Desarrollar un programa que solicite la carga de 10 
números e imprima la suma de los últimos 5 valores ingresados.*/

int main()
{
    //Definicion de variables y contadores
    int cont1, contfine, num1, suma2, num2;
    int i;
    int prince = 10; 
    for (i = 0; i < 5; i++)
    {
        printf("Ingresa los primeros numeros: ");
        scanf("%d", &num1); 
        cont1++;
    }

    for (i = 0; i < 5; i++)
    {   printf("\n Ingrese los ultimos digitos: ");
        scanf("%d", &num2);
        suma2 += num2;
        contfine++;
    }

    printf("La suma de los ultimos 5 es: %d", suma2);
    
    return 0;
}
