/*

Ingresar el sueldo de una persona, 
si supera los 3000 pesos mostrar un mensaje en pantalla indicando 
que debe abonar impuestos.

*/

int main(){
    int sueldo;
    printf("Ingrese el sueldo");
    scanf("%d", &sueldo);

    if (sueldo > 3000)
    {
        printf("Debe pagar impuestos");
    } else{
        printf("Esta excento de impuestos");
    }
    
    return 0;
}
