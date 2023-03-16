/*

Se carga una fecha(dia, mes, año) por teclado. 
Mostrar un mensaje si corresponde al primer trimestre del año. 
Recordamos que al usar la compuerta OR con que una de las condiciones sea verdadera ya el resultado dara verdadero.

*/

int main() {
    int dia, mes, año;
    printf("Ingrese el dia: ");
    scanf("%d", &dia);
    printf("Ingrese el mes: ");
    scanf("%d", &mes);
    printf("Ingrese el año: ");
    scanf("%d", &año);

    if (mes == 3 || mes == 2 || mes == 1) {
        printf("La fecha ingresada corresponde al primer trimestre del año");
    }
    
    return 0;
}
