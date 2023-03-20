//1 - Imprimir los números del 1 al 500.

int main()
{
    int x; //Definis esta variable auxiliar para el contador
    int x = 1; //Siempre debe ser menor a 100
    while (x <= 500)
    {
        printf("%d",x); //Imprimis el resultado
        printf(" - "); //Dejas un espacio
        x = x + 1; //Aumentara automaticamente hasta llegar a 100
    }
    return 0;
}
