/* Se desea realizar la liquidación de sueldos para empleados de una institución. Se conoce el
Salario Básico y los siguientes ítems:
a. Adicionales:
i. 10% en concepto de antigüedad.
ii. $12500,00 en concepto de Salario Familiar.
b. Descuentos:
i. 14% de aporte jubilatorio.
ii. $1500,00 de seguro de vida obligatorio.
Mostrar cada ítem del sueldo y el total a percibir por el empleado*/


int main()
{
    float salarioBasico;
    float adicionales;
    float descuentos;
    float totalAPercibir;

    printf("Ingrese el salario básico del empleado: ");
    scanf("%f", &salarioBasico);

    // Cálculo de los adicionales
    float antiguedad = salarioBasico * 0.10;
    float salarioFamiliar = 12500.00;
    adicionales = antiguedad + salarioFamiliar;

    // Cálculo de los descuentos
    float aporteJubilatorio = salarioBasico * 0.14;
    float seguroVida = 1500.00;
    descuentos = aporteJubilatorio + seguroVida;

    // Cálculo del total a percibir
    totalAPercibir = salarioBasico + adicionales - descuentos;

    printf("\nDetalle de sueldo:\n");
    printf("Salario básico: %.2f\n", salarioBasico);
    printf("Antigüedad: %.2f\n", antiguedad);
    printf("Salario familiar: %.2f\n", salarioFamiliar);
    printf("Adicionales: %.2f\n", adicionales);
    printf("Aporte jubilatorio: %.2f\n", aporteJubilatorio);
    printf("Seguro de vida: %.2f\n", seguroVida);
    printf("Descuentos: %.2f\n", descuentos);
    printf("Total a percibir: %.2f\n", totalAPercibir);

    return 0;
}

