//Dado un numero de mes indicar en que estacion estamos

int main(int argc, char const *argv[])
{
    int mes;
    printf("Ingrese el mes: ");
    scanf("%d", &mes);
    if (mes >= 1 && mes <= 3)
    {
        printf("Estamos en verano");
    }
    else if (mes > 3 && mes <= 6)
    {
        printf("Estamos en otoño");
    }
    else if (mes >= 7 && mes <= 9)
    {
        printf("Estamos en invierno");
    } else
    {
        printf("Estamos en primavera");
    }
    return 0;
}
