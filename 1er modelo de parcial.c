/****

Realice la codificación en lenguaje C para el siguiente enunciado

En una escuela se practican tres tipos de deportes. 
Para saber la preferencia de cada alumnq realiza una encuesta. 
Se cargan los siguientes datos de los N alumnos

Edad que tiene el alumno

Sexo (1 si es Masculino y 2 si es Femenino)

Deporte Preferido (0 si es Hockey, 1 si es Voley, 2 si es Atletismo).

Se desea conocer

a) La carga de los datos se deberá realizar en una función con tipo. 
En la función main se debe mostrar la cantidad de alumnos de sexo femenino que eligen Voley 
y el Promedio de las edades de los estudiantes de sexo masculino.


*********/
int dep(int n,int *contFemV, int *contEdMasc, int *suma)
{
    int edad;
    int sex;
    int deporte;
    for (int i = 0; i < n; i++)
    {
        printf("Ingrese el deporte (0 si es Hockey, 1 si es Voley, 2 si es Atletismo): ");
        scanf("%d", &deporte);
        printf("Ingrese el sexo (1 si es Masculino y 2 si es Femenino): ");
        scanf("%d", &sex);
        printf("Ingrese la edad: ");
        scanf("%d", &edad);

        if (sex == 2 && deporte == 1)
        {
            (*contFemV)++;
        }

        if (sex == 1)
        {
            (*contEdMasc)++;
            (*suma)+= edad;
        }
    }
}

int main(int argc, char const *argv[])
{
    int contFemV = 0; //Contador de chicas que juegan voley
    int contEdMasc = 0; //Contador de edades de los chicos
    int suma = 0;
    int n;
    printf("Ingrese un el numero de alumnos: ");
    scanf("%d", &n);
    dep(n, &contFemV, &contEdMasc, &suma);
    float prom = (float)suma / contEdMasc;

    printf("Chicas que prefieren voley: %d", contFemV);
    printf("\n");
    if (contEdMasc == 0)
    {
        printf("No se ingresaron datos de varones");
    } else
    {
        printf("Promedio de edad de los varones: %0.2f", prom);
    }
    
    return 0;
}
