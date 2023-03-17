/*

Se ingresan 3 valores por teclado, en caso de que los 3 sean iguales se imprime la suma del primer con el segundo y al resultado se lo multiplica por el tercero

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
    int suma = valor1 + valor2;
    int multipliacion = suma * valor3;

    //Muestra de valores
    if (valor1 == valor2 && valor1 == valor3)
    {
        printf("El resultado de la suma es: %d", suma);
        printf("\nEl resultado final es: %d", multipliacion);
    } else {
        printf("Los valores no son iguales");
    }
    
    return 0;

}
