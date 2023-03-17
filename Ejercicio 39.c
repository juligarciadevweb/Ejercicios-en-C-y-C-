/*

Se ingresan 3 valores por teclado, si todos son menores a 10 se imprime la leyenda "Todos son menores a 10"

*/

int main(){
    //Seccion de declaraciones y lectura
    int valor1, valor2, valor3;
    printf("Ingrese el primer valor: ");
    scanf("%d", &valor1);
    printf("Ingrese el segundo valor: ");
    scanf("%d", &valor2);
    printf("Ingrese el tercer valor: ");
    scanf("%d", &valor3);
    if (valor1 < 10 && valor2 < 10 && valor3 < 10)
    {
        printf("Todos son menores a 10");
    }
    else
    {
        printf("No son menores a 10");
    }
    
    return 0;
}
