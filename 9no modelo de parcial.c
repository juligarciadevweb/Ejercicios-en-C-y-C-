/*
Enunciado:

Leer dos vectores A y B de dimensiones 10 cada uno. 
Generar un tercer vector C donde cada elemento del vector C sera 
 la suma de los elementos de los vectores A y B.
a. .Mostrar los tres vectores

*/

int main(int argc, char const *argv[])
{
    int a[10], b[10], c[10];

    for (int i = 0; i < 9; i++)
    {
        printf("Ingrese a[%d]= ", i);
        scanf("%d", &a[i]);
        printf("\nIngrese b[%d]= ", i);
        scanf("%d", &b[i]);
        c[i] = a[i] + b[i];
    }
    printf("\n");
    for (int i = 0; i < 9; i++)
    {
        printf("\nLa suma es c[%d]= %d",i, c[i]);
    }
    
    return 0;
}
