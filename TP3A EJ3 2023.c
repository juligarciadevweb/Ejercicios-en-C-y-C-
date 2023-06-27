/*
Dado el Ingreso de un trabajador se desea conocer el Monto que deberá pagar en concepto
de Impuesto a las Ganancias:
a. Ingreso de $ 50000,00 o menos; no paga impuesto.
b. Ingreso Mayor a $ 50000,00 y hasta $ 80000,00; paga el 1,5%.
c. Ingreso Mayor a $ 80000,00; paga el 2%.
*/

int main()
{
    float ingresos;
    printf("Ingrese el monto: ");
    scanf("%f", &ingresos);

    if (ingresos <= 50000.00)
    {
        printf("No paga impuesto\n");
    }
    else if (ingresos <= 80000.00)
    {
        float impuesto = ingresos * (1.5 / 100);
        printf("Pagará un impuesto del 1.5%%: %.2f\n", impuesto);
        float total = ingresos - impuesto;
        printf("El total después del impuesto es: %.2f\n", total);
    } else
    {
        float impuesto = ingresos * (2.0 / 100);
        printf("Pagará un impuesto del 2%%: %.2f\n", impuesto);
        float total = ingresos - impuesto;
        printf("El total después del impuesto es: %.2f\n", total);
    }

    return 0;
}


