/*
    Desarrolle un programa que pida el ingreso del precio de un producto y la cantidad que lleva el cliente
    Mostrar lo que debe abonar el comprador usando el tipo de dato flotante
*/

int main(){
    float precio;
    int cantidad;
    
    printf("Ingrese el precio del producto: ");
    scanf("%f", &precio);
    printf("Ingrese la cantidad: ");
    scanf("%d", &cantidad);

    float preciofinal = precio * cantidad;
    printf("Usted debe abonar: %f", preciofinal);
    return 0;
}
