            //Funcion con tipo con parametro por valor
/*
Desarrollar dos funciones que reciban como parámetro el valor del lado de un cuadrado. 
La primera debe calcular y mostrar la superficie y la segunda calcular y mostrar el perímetro.
En la main llamar a las funciones pasando los valores enteros comprendidos entre 10 y 20
*/

int sup(int lad)
    {
        int s = lad * lad;
        return s;
    }   

int per(int lad)
    {
        int b = lad * 4;
        return b;
    }

int main(int argc, char const *argv[])
{
    int lad;
    printf("Ingrese el lado: ");
    scanf("%d", &lad);
    int x = sup(lad);
    int bt = per(lad);
    printf("La superficie es: %d\n", x);
    printf("----");
    printf("\nEl perimetro es: %d", bt);
    return 0;
}
