/*

Ingresar el valor del Kw y el consumo eléctrico en una casa, se pide:

Mostrar un mensaje “No tiene consumo” si el consumo es igual a cero.
Mostrar lo que debe pagar el usuario, teniendo en cuanta que 
se le realiza un descuento del 5% para consumos menores a 350 Kw.

*/


int main() {
    //Definimos las variables como datos flotantes
    float kw, consumo, total;

    //Pedimos los datos
    printf("Ingrese el valor del Kw: ");
    scanf("%f", &kw);
    printf("Ingrese el consumo electrico en una casa: ");
    scanf("%f", &consumo);

    //Usamos una condicion booleana
    if (consumo == 0) {
        printf("No tiene consumo.\n");
    } else {
        total = kw * consumo;
        if (consumo < 350) {
            total *= 0.95; // Aplicar descuento del 5%
        }
        printf("El usuario debe pagar: %.2f\n", total);
    }
    return 0;
}
