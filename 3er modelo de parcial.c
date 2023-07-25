/*

Desarrolla un programa en C para un pequeño negocio 
que controle las ventas realizadas por diferentes vendedores. 
Cada venta debe incluir el monto,  
el sexo (1 para Masculino y 2 para Femenino) 
y el tipo de producto vendido (por ejemplo, 0 para Electrónica, 1 para Ropa, 2 para Alimentos). 

El programa debe permitir ingresar los datos de N ventas y 
luego mostrar la cantidad total de ventas realizadas por vendedor de género masculino 
y la cantidad de ventas de tipo Ropa realizadas por vendedor de género femenino
(mostrando tambien el importe total que vendio cada uno).
Mostrar en el programa principal el monto total de las ventas (la suma de todas las ventas)
Usar una funcion sin tipo para guardar los valores 

*/

void carga(int n, int *cont1er, int *cont2do, int *suma, int *sumFem, int *sumMasc)
{
    int sex;
    int prod;
    int monto;

    for (int i = 0; i < n; i++)
    {
        printf("Ingrese el sexo del vendedor(1 para masculino y 2 para femenino): ");
        scanf("%d", &sex);
        printf("Ingrese el producto (0 para Electrónica, 1 para Ropa, 2 para Alimentos): ");
        scanf("%d", &prod);
        printf("Ingrese el monto de la venta: ");
        scanf("%d", &monto);

        switch (sex)
        {
        case 1:
            (*cont1er)++;
            (*sumMasc)+=monto;
            break;
        
        case 2:
            (*cont2do)++;
            (*sumFem)+=monto;
            break;

        default:
            printf("Numero invalido");
            break;
        }

        (*suma)+=monto; 
    }
    
}

int main()
{
    int n;
    int suma = 0; //Suma total de los montos de las ventas
    int cont1er = 0; //Ventas realizadas por el vendedor masculino
    int cont2do = 0; //Ventas realizadas por la vendedora femenina
    int sumFem = 0; //Suma de las ventas realizadas por la vendedora
    int sumMasc = 0; //Suma de las ventas realizadas por el vendedor
    printf("Ingrese la cantidad de ventas: ");
    scanf("%d", &n);

    carga(n, &cont1er, &cont2do, &suma, &sumFem, &sumMasc);

    printf("La cantidad de ventas es: %d", n);
    printf("\nEl monto total es: %d", suma);
    printf("\nLos vendedores masculinos obtuvieron un total de %d ventas y recaudaron %d", cont1er, sumMasc);
    printf("\nLas vendedoras femenindas obtuvieron un total de %d ventas y recaudaron %d", cont2do, sumFem);
    return 0;
}

