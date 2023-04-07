/*

Desarrollar un programa que permita cargar n números enteros y 
luego nos informe cuántos valores fueron pares y cuántos impares.
Emplear el operador “%” en la condición de la estructura condicional 
(este operador retorna el resto de la división de dos valores, 
por ejemplo 11%2 retorna un 1):

*/

int main(){
    //Definicion de variables y contadores
    int X, num, i;
    int imp = 0;
    int par = 0;
    //Pedido de datos
    printf("Ingrese la cantidad de numeros; ");
    scanf("%d", &num);
    //Uso del ciclo while
    while (X < num)
    {
        printf("Ingrese el numero: ");
        scanf("%d", &i);
        if (i % 2 == 0) {
            par++;
        } else {
            imp++;
        }
        X = X + 1;
    }
    printf("Se ingresaron %d numeros", X);
    printf("\nDe los cuales %d son impares", imp);
    printf("\nY %d son pares ", par);

    return 0;
}
