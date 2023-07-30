/*
Ingresar los limites de un intervalo cerrado [A, B]. 
Luego ingrese N numeros y determine mediante una funcion 
la cantidad de valores que estan dentro del intervalo 
y que cantidad estan fuera del mismo.
Mostrar los resultados en la funcion main().
*/

void intervalo(int n, int limSup, int limInf, int *numDendro, int *numFuera)
{
    int number;
    for (int i = 0; i < n; i++)
    {
        printf("Ingrese el numero: ");
        scanf("%d", &number);
        if (number > limInf && number < limSup)
        {
            (*numDendro)++;
        } else{
            (*numFuera)++;
        }
    }
}

int main(int argc, char const *argv[])
{
    //Declaracion de los limites del vector
    int n, limInf, limSup;

    //Declaracion de contadores
    int numDendro = 0;
    int numFuera = 0;

    //Lectura de la cantidad de numeros a ingresar
    printf("Ingrese la cantidad de valores a ingresar: ");
    scanf("%d", &n);

    //Lectura e ingreso de los limites
    printf("Ingrese el limite inferior: ");
    scanf("%d", &limInf);
    printf("Ingrese el limite superior: ");
    scanf("%d", &limSup);

    //Llamada a la funcion
    intervalo(n, limSup, limInf, &numDendro, &numFuera);
    
    //Concatenacion e impresion de los parametros referenciales
    printf("Los valores dentro del intervalo son %d", numDendro);
    printf("\nLos valores fuera del intervalo son %d", numFuera);
    return 0;
}
