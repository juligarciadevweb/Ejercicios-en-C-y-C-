/*

Utiliza una función CON TIPO para calcular el área de un triángulo:

*/

int area(int base, int altura){
    int res = (base * altura) / 2;
    return res;
}

int main(){
    //Pedimos los datos
    int base, altura;
    printf("Ingrese la base: ");
    scanf("%d", &base);
    printf("Ingrese la altura: ");
    scanf("%d", &altura);

    int res = area(base, altura); //Declaramos la funcion en una variable
    printf("%d", res); //Imprimimos directamente las variables
    return 0; //Retornamos el valor del cuerpo del programa
}
