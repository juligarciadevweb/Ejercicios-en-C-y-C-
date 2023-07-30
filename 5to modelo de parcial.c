/*A través de una función sin tipo convierta una temperatura dada en grados Celsius 
a grados Fahrenheit, muestre el resultado en la función main().

 multiplica la temperatura en grados Celsius por 9/5 
 y luego suma 32 para obtener el equivalente en grados Fahrenheit.*/

void convertir(int cel, int *faren)
{
    *faren = (cel * 9/5) + 32;
}
int main(int argc, char const *argv[])
{
    int faren = 0;
    int cel;
    printf("Ingreses los grados celcius: ");
    scanf("%d",&cel);
    convetir(cel, &faren);
    printf("Los grados faren son %d", faren);
    return 0;
}


 