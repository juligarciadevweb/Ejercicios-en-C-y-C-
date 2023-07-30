/*

Un banco registra el pago del servicio eléctrico de N usuarios. 
Entre los datos se registra: el número de usuario, 
Periodo que se abona, consumo realizado en el periodo, Monto abonado.
Tener en cuenta que Según el consumo es el monto que se abona.

Consumo 1 (desde 1 hasta 200 KWh)                  0.4935 $/KWh
Consumo 2 (desde 201 hasta 600 KWh)                0.5820 $/KWh
Consumo 3 (Superior a 600 KWh)                     0.6150 $/KWh

Se desea saber:
    a) Cuál es el monto final abonados por todos los usuarios.
    b) Cuántos de estos usuarios son grandes contribuyentes. 
Se considera grandes contribuyentes a los que tienen un consumo superior a 600 KWh.

*/

int main(int argc, char const *argv[])
{
    int sum = 0;
    int bigContr = 0;
    int periodo = 0;
    float precio = 0.00;
    float consumo = 0;
    int monto = 0;
    int n;
    printf("Ingrese la cantidad de usuarios a cargar: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Ingrese el consumo: ");
        scanf("%f", &consumo);
        printf("Ingrese el periodo: ");
        scanf("%d", &periodo);
        printf("Ingrese el monto: ");
        scanf("%d", &monto);

        if (consumo >= 1 && consumo <= 200)
        {
            precio = 0.4935 * consumo; //Reasignacion
        }
        else if (consumo > 200 && consumo <= 600)
        {
            precio = 0.5820 * consumo;
        }
        else if (consumo > 600)
        {
            precio = 0.6150 * consumo;
            bigContr++;
        }
        else
        {
            // Si el consumo es 0 o negativo, el precio se mantiene en 0 para este usuario.
            precio = 0;
        }

        sum += precio;
        
    }
    
    
    printf("Los grandes contribuyentes son: %d", bigContr);
    printf("\nLa suma total del monto es: %d", sum);
    return 0;
}
