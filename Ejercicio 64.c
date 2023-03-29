/*
Ingresar un número entero y calcular su cuadrado mediante una función sin tipo, 
y mostrar el resultado en main().
*/


void cuadrado(int x){
    int result = x * x;
    printf("El cuadrado de %d es %d\n", x, result);
}

int main(){
    int x;
    printf("Ingrese el valor del numero: ");
    scanf("%d", &x);
    cuadrado(x);
    return 0;
}
