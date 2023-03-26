/*

Escribe un programa que solicite al usuario la cantidad de productos 
que compró en una tienda y luego pida el precio de cada producto. 
El programa deberá imprimir el total de la compra y 
el promedio de precios de los productos comprados.

*/

int main(){
    int cant = 0, precio = 0, total = 0, X = 1;
    float promedio;
    printf("Ingrese la cantidad de productos: ");
    scanf("%d", &cant);
    while (X <= cant)
    {
        printf("Ingrese el precio del producto: ");
        scanf("%d", &precio);
        total += precio;
        X = X + 1;
    }
    promedio = (float) total / cant;
    printf("El total de la compra es: %d\n", total);
    printf("El precio promedio es: %f", promedio);
    
    return 0;
}
