/*

Dados 3 números A, B y C reales. Realizar lo que en cada caso se pida.
Se Pide
    a. Si A es menor a C:
        Mostrar el resultado del producto de A con C y mostrar un mensaje 
        indicando si dicho resultado es positivo o negativo.
    b. Si C es Mayor a B:
        Mostrar el resultado de dividir C y B.

*/

int main(){
    int A, B, C;
    int producto = A * C;
    int div = C / B;


    printf("Ingrese A");
    scanf("%d", &A);
    printf("Ingrese B");
    scanf("%d", &B);
    printf("Ingrese C");
    scanf("%d", &C);

    if (A < C)
    {
        printf("El resultado del producto de A y C es %d", producto);
    }
    else if (producto > 0)
    {
        printf("El numero es positivo");
    }
    if (C > B)
    {
        printf("El resultado de la division es %d", div);
    }
    else
    {
        printf("No se cumplio la condicion anterior");
    }
    

}
