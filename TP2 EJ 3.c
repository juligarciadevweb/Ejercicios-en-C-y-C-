/*

Dado el Ingreso de un trabajador se desea conocer el Monto que deberá pagar en concepto de Impuesto a las Ganancias:
a. Ingreso de $ 50000,00 o menos; no paga impuesto.
b. Ingreso Mayor a $ 50000,00 y hasta $ 80000,00; paga el 1,5%.
c. Ingreso Mayor a $ 80000,00; paga el 2%.

*/


int main(){
    int S;

    printf("Ingrese el sueldo: ");
    scanf("%d", &S);

    float bex1 = (2.0 / 100) * S;    
    float bex2 = (1.5 / 100) * S;

    if (S <= 50000)
    {
        printf("No pagara impuesto");
    }
    else if (S > 50000 && S < 80000)
    {
        printf("Pagara un impuesto del 1.5%%, cuyo importe sera %f", bex2);
    }
    else
    {
        printf("Pagara un impuesto del 2%%, cuyo importe sera %f", bex1);
    }
    
    return 0;
}
