/*
Mostrar todos los multiplos de 8 que hay hasta el valor 500
Debe aparecer en pantalla el valor 8, 16, 24
*/
int main()
{
    int mult8 = 8;
    while (mult8 <= 500)
    {
        printf("%i",mult8);
        printf(" - ");
        mult8 = mult8 + 8; //contador + 8
    }
    return 0;
}
