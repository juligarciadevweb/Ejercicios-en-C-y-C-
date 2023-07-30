    //Vectores y funciones

void fun(int a[])
void imp(int x[])

int main(int argc, char const *argv[])
{
    int v[2]; //Constara de 2 posiciones (0 y 1)
    fun(v); //Para usar un vector en una funcion solo debemos pasarle el nombre del mismo a la llamada
    imp(v);
    
    return 0;
}

void fun(int a[])
{
    for (int i = 0; i < 2; i++)
    {
        printf("\n a[%d] = ", i);
        //Para mostrar el elemento que vamos a ingresar y vaya iterando ese valor
        scanf("%d", &a[i]);
    
    }
}

void imp(int x[])
{
    for (int i = 0; i < count; i++)
    {
        printf("%d, ", x[i]);
    }
    
}