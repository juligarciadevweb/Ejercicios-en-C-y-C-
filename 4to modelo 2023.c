/*
Una tienda de productos electrónicos registra las ventas diarias de cada uno de los N productos en un arreglo unidimensional. Cada elemento del arreglo representa la cantidad de unidades vendidas de un producto en un día determinado.

SE PIDE:

a) Realizar la carga del vector utilizando una función sin tipo.

b) Calcular y mostrar el promedio de ventas diarias de los productos.

c) Mostrar el producto de mayor precio

d) Mostrar el porcentaje de productos de precio impar

*/

void cargaProMay(int n, int vec[100])
{
    int suma = 0, sumaImp = 0;
    int may = vec[0];
    float promedio = 0.00;
    float porcentaje = 0.00;
    for (int i = 0; i < n; i++)
    {
        printf("Ingrese el precio del producto: ");
        scanf("%d", &vec[i]);
        suma += vec[i];

        if (vec[i] > may)
        {
            may = vec[i];
        }

        if (vec[i] % 3 == 0)
        {
            sumaImp += vec[i]; 
        }
    }
    
    promedio = (float)suma / n;
    porcentaje = (sumaImp/n) * 100;
    printf("El promedio de ventas diarias es %0.2f", promedio);
    printf("\nEl porcentaje de productos de precio impar es %0.2f", porcentaje);
}

int main(int argc, char const *argv[])
{
    int vec[100];
    int n;
    printf("Ingrese la cantidad de n ventas: ");
    scanf("%d", &n);
    cargaProMay(n, vec);
    return 0;
}
