//Escribir un programa que pida al usuario una fecha e indique si esa fecha es navidad

int main(){
    //Seccion de declaraciones y lectura
    int dia, mes, año;
    printf("Ingrese el día: ");
    scanf("%d", &dia);
    printf("Ingrese el mes: ");
    scanf("%d", &mes);
    printf("Ingrese el año: ");
    scanf("%d", &año);

    //Validacion de la fecha
    if (dia == 25 && mes == 12)
    {
        printf("Es navidad");
    } else {
        printf("No es navidad");
    }
    
    return 0;

}
