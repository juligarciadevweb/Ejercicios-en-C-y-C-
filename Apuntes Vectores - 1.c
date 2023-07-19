//1 - Vectores
 
//Definicion basica
int main()
{
    int arreglo[4] = {1,2,3,4}; //El 4 es la cantidad de elementos 
    printf("%d", arreglo[2]); //Imprimimos la posicion 2
    return 0;
}

//Definiendo el tamaño por el usuario
int main()
{
    int n;
    printf("Ingrese el tamaño del vector: ");
    scanf("%d", &n); //Leemos el tamaño del vector

    //Carga del vector
    int vec[n]; //El vector tendra el tamaño dado por el usuario
    for (int i = 0; i < n; i++)
    {
        printf("\n Nota[%d] = ", i);
        //Para mostrar el elemento que vamos a ingresar y vaya iterando ese valor
        scanf("%d", &vec[i]);
    }
    
    printf("Los valores del arreglo son: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d - \n", vec[i]);
    }
    
}

//Arreglo multidimencional

int main()
{
    int multi[2][3] = {{5,3,1},{6,4,2}};
    //1er corchete nro de filas 2 en este caso
    //2do corchete nro de columnas 3 en este caso
    printf("%d", multi[1][1]);
    return 0;
}