//Calcule el dinero ingresado de la venta total del dia

int main(){
    float ventaCliente = 0;
    float ventaDiaria = 0;

    do
    {
        printf("Ingrese el monto de los productos: ");
        scanf("%f", &ventaCliente); //Fijate bien en los scanf, para leer el tipo de dato
        //No te olvides del &

        ventaDiaria += ventaCliente; 
        //Todas las cifras ingresadas en ventaCliente seran sumadas y dara igual a la venta diaria

    } while (ventaCliente != 0); //Seria como un punto de ruptura del codigo
        //Si ingresamos 0 se cierra el ciclo y se muestra por pantalla 
        //El total de los valores ingresados anteriormente
        printf("El total de la venta es: %f", ventaDiaria);
    
    return 0;
}
