/*
En una tienda de electrodomésticos se ingresan los precios de una serie de productos.
El proceso de ingreso se repite hasta que se ingrese un precio igual a cero.
Finalizado el ingreso, se debe determinar el precio promedio de los productos ingresados
y cuál es el producto más caro.
*/

int main()
{
    int suma = 0;
    int x = 0; //Nos dira cuantos productos se ingresaron 
    int prod; //Declaramos la variable para el precio del producto que leeremos en el bucle
    int mayor = 0;
    
    do
    {
        printf("Ingrese el precio del producto: ");
        scanf("%d", &prod); //Leemos el precio del producto
        suma += prod; //Suma para determinar el promedio proximamente

        if (prod != 0 && prod > mayor)
        {
            mayor = prod; 
            //En caso de que el precio sea mayor al anterior se realiza una reasignacion
        }
        
        x++;
    } while (prod != 0);
    
    float promedio = suma / x;
    
    printf("El producto mas caro es %d", mayor);
    printf("-");
    printf("El promedio es %0.2f", promedio);
    return 0;
}
