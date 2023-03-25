/*
Se ingresan un conjunto N de alturas de personas por teclado. 
mostrar el promedio de altura
*/

int main() {
    int n, x=1;
    float alt, suma=0,prom;
    printf("cuantas personas ");
    scanf("%i", &n);
    while(x<=n)
    {
        printf("ingrese altura ");
        scanf("%f",&alt);
        suma=suma+alt;
        x=x+1; //X aumenta su valor a medida que se va repitiendo el ciclo
    }
    prom=suma/n;
    printf("elpromedio de altura es: %f",prom);

    return 0;
}
