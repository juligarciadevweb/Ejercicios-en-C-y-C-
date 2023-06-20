/*
Ingresar N terna de valores enteros positivos, 
correspondientes a datos de una fecha (Día, Mes, Año), 
determine la validez de las mismas 
y mediante un mensaje informar 
si los datos ingresados son “Fecha Validas” o “Fechas Invalidas”. 
El ingreso de fechas termina cuando se ingresa el año 0
*/

int main(int argc, char const *argv[])
{       
    int fechValid = 0;
    int fechIn = 0;
    int año;
    int day;
    int mes;  

    //Generalmente el do while es el ciclo ideal para esto
    do
    {
        printf("Ingrese el dia: ");
        scanf("%d", &day);
        printf("Ingrese el mes: ");
        scanf("%d", &mes);
        printf("Ingrese el año: ");
        scanf("%d", &año);

        //El error mas comun aqui son las condiciones
        if (day <= 31 && mes <= 12 && año <= 2023 && año != 0)
        {
            fechValid++; //Si se cumple la condicion sera una fecha valida
        } 
        else
        {
            fechIn++; //En caso de no cumplirse sera invalida
        }

    } while (año != 0);
    
    printf("Las fechas inválidas son: %d\n", fechIn);
    printf("Las fechas válidas son: %d\n", fechValid);
    
    return 0;
}
