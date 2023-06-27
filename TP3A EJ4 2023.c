/*
Un alumno desea saber su nota final en una materia integradora, que tienen en cuenta las
calificaciones de otras dos asignaturas.
Dicha nota se compone de:
a. 20% del promedio de dos notas de la primera Asignatura.
b. 30% del promedio de dos notas de la segunda Asignatura.
c. 50% de la nota del Trabajo Final Integrador.
*/

int main()
{
    float valorDeclarado;
    float impuestoAduana;
    float flete;
    float seguro;
    float precioCostoFinal;

    printf("Ingrese el valor declarado del bien en U$S: ");
    scanf("%f", &valorDeclarado);

    if (valorDeclarado <= 1500)
    {
        impuestoAduana = valorDeclarado * 0.15;
    }
    else
    {
        impuestoAduana = valorDeclarado * 0.20;
    }

    flete = 200;
    seguro = valorDeclarado * 0.02;

    precioCostoFinal = valorDeclarado + impuestoAduana + flete + seguro;

    printf("\nDetalle de gastos:\n");
    printf("Impuesto de Aduana: U$S %.2f\n", impuestoAduana);
    printf("Flete desde el país de origen: U$S %.2f\n", flete);
    printf("Seguro por daños o extravío: U$S %.2f\n", seguro);
    printf("\nPrecio de costo final de importación: U$S %.2f\n", precioCostoFinal);

    return 0;
}

