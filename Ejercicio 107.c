                    //Funcion sin tipo con parametro referencial
/*
Dado el Ingreso de un trabajador se desea conocer el monto que deberá pagar en concepto
de Impuesto a las Ganancias:
a. Ingreso de $ 60000,00 o menos paga 1.5%.
b. Ingreso Mayor a $ 60000,00 y hasta $ 90000,00; paga el 3%.
c. Ingreso Mayor a $ 80000,00; paga el 4%
*/
void ing1(int ing, float *r)
    {
        *r = ing * 0.15; 
    }

void ing2(int ing, float *r)
    {
        *r = ing * 0.3;
    }

void ing3(int ing, float * r)
    {
        *r = ing * 0.4;
    }
int main()
{
    float r = 0;
    int ing;
    printf("Ingrese el sueldo: ");
    scanf("%d", &ing);

    if (ing <= 60000)
    {
        ing1(ing, &r);
        printf("Pagara %0.2f de impuesto", r);
    } else if (ing > 60000 && ing < 90000)
    {
        ing2(ing, &r);
        printf("Pagara %0.2f de impuesto", r);
    } else
    {
        ing2(ing, &r);
        printf("Pagara %0.2f de impuesto", r);
    }
    
    return 0;
}

