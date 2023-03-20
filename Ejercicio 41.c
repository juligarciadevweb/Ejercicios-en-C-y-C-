/*

Realizar un programa en pantalla que muestre los numeros del 1 al 100

*/

int main()
{
    int x; //Definis esta variable auxiliar para el contador
    int x = 1; //Siempre debe ser menor a 100
    while (x <= 100)
    {
        printf("%d",x); //Imprimis el resultado
        printf(" - "); //Dejas un espacio
        x = x + 1; //Aumentara automaticamente hasta llegar a 100
    }
    return 0;
}
