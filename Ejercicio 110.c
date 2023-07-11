                //Funcion con tipo y parametro por valor
/*
Desarrollar una función que solicite la carga de tres valores y muestre el mayor. 
Desde la función main llamar 3 veces a dicha función.
*/

int may(int not1, int not2, int not3)
{
    int notMay = 0;
    if (not1 > not2 && not1 > not3)
    {
        notMay = not1;
    } else if (not2 > not1 && not2 > not3)
    {
        notMay = not2;
    } else
    {
        notMay = not3;
    }
    return notMay;
}

int main()
{
    int not1, not2, not3;
    printf("Ingrese la primera nota: ");
    scanf("%d", not1);
    printf("Ingrese la segunda nota: ");
    scanf("%d", not2);
    printf("Ingrese la tercera nota: ");
    scanf("%d", not3);

    int n = may(not1, not2, not3);
    printf("La nota mayor es\n");
    int n = may(not1, not2, not3);
    printf("La nota mayor es\n");
    int n = may(not1, not2, not3);
    printf("La nota mayor es\n");
    return 0;
}
