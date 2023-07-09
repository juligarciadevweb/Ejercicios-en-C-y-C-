/*
Dada una la duración de una llamada en minutos, determinar el costo teniendo en cuenta que:
Los primeros 3 minutos cuestan $180 y cada minuto adicional $ 80.
*/

int main(int argc, char const *argv[])
{
    int min;
    int prec=0;
    printf("Ingrese los minutos: ");
    scanf("%d", &min);
    int precMin = 180;

    if (min < 3)
    {
        prec = precMin;
        printf("El precio es: %d", prec);
    } else
    {
        int ad = (min - 3) * 80;
        prec = precMin + ad;
        printf("El precio es: %d", prec);
    }
    
    return 0;
}
