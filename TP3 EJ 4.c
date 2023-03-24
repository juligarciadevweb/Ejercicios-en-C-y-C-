/*

Ingresar por teclado el precio por kilo y la cantidad en kilo adquirida por un cliente de tres productos (6 variables). se pide lo siguiente:
✓ El monto total en pesos correspondiente a la compra de cada producto.
✓ El total en pesos de lo que debe pagar el cliente.
✓ Si el total es superior a $1000 hacer un descuento del 5%. Montar dicho monto y mostrar
lo que debe abonar por toda la compra.


*/


int main() {
    float precio1, precio2, precio3, cantidad1, cantidad2, cantidad3;
    float total1, total2, total3, subtotal, descuento, total;

    // Leer los datos del usuario
    printf("Ingrese el precio por kilo del producto 1: ");
    scanf("%f", &precio1);
    printf("Ingrese la cantidad en kilos del producto 1: ");
    scanf("%f", &cantidad1);

    printf("Ingrese el precio por kilo del producto 2: ");
    scanf("%f", &precio2);
    printf("Ingrese la cantidad en kilos del producto 2: ");
    scanf("%f", &cantidad2);

    printf("Ingrese el precio por kilo del producto 3: ");
    scanf("%f", &precio3);
    printf("Ingrese la cantidad en kilos del producto 3: ");
    scanf("%f", &cantidad3);

    // Calcular el monto total de cada producto
    total1 = precio1 * cantidad1;
    total2 = precio2 * cantidad2;
    total3 = precio3 * cantidad3;

    // Calcular el subtotal y el total de la compra
    subtotal = total1 + total2 + total3;
    total = subtotal;

    // Verificar si se aplica un descuento
    if (total > 1000) {
        descuento = subtotal * 0.05;
        total -= descuento;
        printf("Se aplica un descuento del 5%%: -$%.2f\n", descuento);
    }

    // Mostrar los resultados
    printf("Monto total del producto 1: $%.2f\n", total1);
    printf("Monto total del producto 2: $%.2f\n", total2);
    printf("Monto total del producto 3: $%.2f\n", total3);
    printf("Subtotal de la compra: $%.2f\n", subtotal);
    printf("Total de la compra: $%.2f\n", total);

    return 0;
}
