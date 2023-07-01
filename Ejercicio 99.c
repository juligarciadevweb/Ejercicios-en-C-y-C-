/*
Se desea realizar la liquidación de sueldos para empleados de una institución. 
Se conoce el sueldo y los siguientes ítems:

Si es mayor a 1.000.000
    a. Adicionales:
    i. 30% en concepto de antigüedad.
    ii. $156000,00 en concepto de salario extra.
    b. Descuentos:
    i. 4% de aporte jubilatorio.
    ii. $15000,00 de seguro de vida obligatorio

En caso contrario solo se le descontaran
    i. 20% en concepto de pago de hipoteca.
    ii. $10000,00 en concepto de obra social prepaga
*/

int main(int argc, char const *argv[])
{
    int sueldo;
    printf("Ingrese el sueldo: ");
    scanf("%d", &sueldo);

    if (sueldo > 1000000)
    {
        //Adicionales
        float por1 = sueldo * 0.30; //Adicional por concepto de antiguedad
        float por2 = sueldo + 156000.0; //Concepto de salario extra 
        //Descuentos
        float por5 = sueldo * 0.04; //Descuento por aporte jubilatorio
        float por6 = 15000.00; //Monto del seguro de vida
        float totA = sueldo + por1 + por2 - por5 - por6;   
        printf("Se le adicionaran %0.2f por antiguedad", por1);
        printf("\nSe le adicionaran %0.2f por salario extra", por2);
        printf("\nSe le descontaran %0.2f por aporte jubilatorio", por5);
        printf("\nSe le descontaran %0.2f por seguro de vida", por6);
        printf("\nEl sueldo total sera de %0.2f", totA);
    } else
        {
            float por3 = sueldo * 0.20; //Pago de hipoteca
            float por4 = sueldo - 10000.0 - por3; //Total descontando la obra social
            printf("Se le descontaran %0.2f en concepto de pago de hipoteca", por3);
            printf("\nSe le hara un descuento de 10000 en concepto de obra social");
            printf("\nEl sueldo total sera de %0.2f", por4); 
        }
    
    return 0;
}
