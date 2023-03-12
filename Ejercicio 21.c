//Pedir que el usuario ingrese un numero y mostrar su tabla de multiplicar

int main(){
    int i, tabla, result;
    printf("Ingrese un numero entero: ");
    scanf("%d", &tabla);

    for (i = 0; i < 10; i++) //Se pueden insertar numeros menores a 10
    {
        result = tabla * i; //Le damos un valor a la variable resultado, fijate bien en esta linea
        printf("\n %d * %d = %d", tabla, i, result); //Escribimos el valor de la multiplicacion
    }    //Se mostrara la multiplicacion de 3 valores enteros
    return 0;
}


