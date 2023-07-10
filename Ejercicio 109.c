                        //Funcion con tipo con parametro por valor
/*
Ingresando el sueldo de un empleado y la antigüedad (cantidad de años de trabajo), calcular la
bonificación que recibe en el momento del Reparto de Utilidades de la Empresa, teniendo en
cuenta que el reparto está relacionado con la antigüedad, de acuerdo con:

Hasta 7 años ------> 24%
Más de 7 años y hasta 11 años ------> 32%
Más de 11 años ------> 55%
*/

float b7(int s)
    {
        float b = s * 0.24;
        return b;
    }

float b11(int s)
    {
        float c = s * 0.32;
        return c;
    }

float b12(int s)
    {
        float d = s * 0.55;
        return d;
    }

int main()
{
    int s, año;
    printf("Ingrese el sueldo: ");
    scanf("%d", &s);
    printf("Ingrese la antiguedad en años: ");
    scanf("%d", &año);

    if (año <= 7)
    {
        float beta = b7(s);
        printf("La bonificacion es %0.2f", beta);
    } else if (año > 7 && año < 11)
    {
        float beta2 = b11(s);
        printf("La bonificacion es %0.2f", beta2);
    }else
    {
        float beta3 = b12(s);
        printf("La bonificacion es %0.2f", beta3);
    }
    
    return 0;
}
 