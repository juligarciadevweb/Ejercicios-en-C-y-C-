/*

EJERCICIO N° 2-No usar Variables Globales

Una empresa de taxis registra los kilómetros recorridos por cada uno de los N autos en un arreglo unidimensional.

SE PIDE:

a) Realice la carga del vector utilizando una función sin tipo.

b) Determine y muestre, el promedio de kilómetros recorrido por los autos

*/
void cargaProm(int n, int vec[100])
{
    int suma = 0;
    float prom = 0.00;
    for (int i = 0; i < n; i++)
    {
        printf("Ingrese el kilometraje: ");
        scanf("%d", &vec[i]);
        suma += vec[i];
    }
    prom = (float)suma / n;
    printf("El promedio es %0.2f kilometros por vehiculo", prom);
}

int main(int argc, char const *argv[])
{
    int n, vec[100];
    printf("Ingrese la cantidad de autos a registrar: ");
    scanf("%d", &n);
    cargaProm(n, vec);
    return 0;
}
