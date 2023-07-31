                    //Funcion con tipo
/*
Crear un programa que permita ingresar N números enteros en la función main. 
Luego, se debe llamar a una función con tipo llamada 'contarNegativos' 
que reciba como parámetro un arreglo de números enteros y 
devuelva la cantidad de números negativos que contiene.

La función main debe mostrar en pantalla la cantidad de números negativos encontrados.
*/

void contarNegativos(int n, int vec[100])
{   
    int neg = 0;
    for (int i = 0; i < n; i++)
    {    
        printf("Ingrese el numero: ");
        scanf("%d", &vec[i]);
        if (vec[i] < 0)
        {
            neg++;
        }
    }
    printf("La cantidad de numeros negativos es %d", neg);
}

int main(int argc, char const *argv[])
{
    int n, vec[100];
    printf("Ingrese la cantidad de numeros a trabajar: ");
    scanf("%d", &n);
    contarNegativos(n, vec);
    return 0;
}
