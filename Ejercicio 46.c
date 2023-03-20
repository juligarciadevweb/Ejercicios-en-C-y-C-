/*

Escribir un programa que solicite la carga de un valor positivo y nos muestre desde 1 hasta el valor ingresado de uno en uno.
Ejemplo: Si ingresamos 30 se debe mostrar en pantalla los números del 1 al 30.

*/



int main(){
    int n;
    printf("Ingrese un numero positivo");
    scanf("%d", &n);
    int x = 1;
    while (x <= n)
    {
        printf("%d", x);
        printf(" _ ");
        x = x + 1;
    }
    return 0;
}
