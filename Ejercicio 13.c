/*

Ingresar las presiones atmosféricas medidas durante 31 días de un mes del año. Contar
cuantos días hubo probabilidad de lluvias o mal tiempo. (Estas condiciones se producen
cuando la presión atmosférica es menor que 960 m bares).

*/

int cont, dias;
float presion;
main()
{
    int c = 0 ;
    int dias = 0 ;
    while (c < 31)
{
    printf("Ingrese presion atmosferica: ");
    scanf ("%f" , &presion ) ;
        if (presion < 960)
    dias = dias + 1 ;
    c = c + 1 ;
}
    printf("Cantidad de días: %d", dias);
    getch();
}
