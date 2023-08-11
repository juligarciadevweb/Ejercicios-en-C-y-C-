/*

Ejercicio 5

En una escuela que posee N alumnos, se registra la información de los alumnos en dos vectores: 
LEG (vector que almacena los legajos), 
PRO (vector que almacena los promedios de los alumnos), 

Los datos de dichos vectores se corresponden por posición (vectores paralelos). 

C)_ Ingresar los datos correspondientes a los vectores LEG y PRO.
D)_ En una función con tipo, determinar la cantidad de alumnos aprobados (promedio>=6). 

Y Mostrar el valor final en la función main().

*/
void cargaVec(int n, int leg[100], int pro[100])
{
    for (int i = 0; i < n; i++)
    {
        printf("Ingrese el legajo: [%d] = ", i);
        scanf("%d", &leg[i]);
        printf("Ingrese el promedio: [%d] = ", i);
        scanf("%d", &pro[i]);
    }
}

int ap(int n, int pro[100])
{
    int contAp = 0;
    for (int i = 0; i < n; i++)
    {
        if (pro[i] > 6)
        {
            contAp++;
        }
    }
    return contAp;
}

int main()
{
    int n, leg[100], pro[100];
    printf("\nIngrese la cantidad de alumnos: ");
    scanf("%d", &n);
    cargaVec(n, leg, pro);
    int aprobados = ap(n, leg);
    printf("\nLa cantidad de aprobados es %d", aprobados);
    return 0;
}

