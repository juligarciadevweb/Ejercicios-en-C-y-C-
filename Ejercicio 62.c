/*

Ingresar dos números, y 
calcular la suma de los mismos mediante una función con tipo, 
mostrar el resultado en main ()

*/
int suma(int a, int b){
    int res  = a + b;
    return res;
}

int main()
{
    int a, b;
    printf("Ingrese el valor a ");
    scanf("%d", &a);
    printf("Ingrese el valor b ");
    scanf("%d", &b);
    int x = suma(a, b);
    printf("%d", x);
    return 0;
}
