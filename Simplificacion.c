int main(){
    printf("Hola mundo");
    int a = 5;
}

                    //Simplificacion de operadores
    
    //Suma
int main() {
    int sum1 = 25;
    int sum2 = 33;
    #define suma sum1 + sum2
    printf("El resultado de la suma es: %d", suma);
    return 0;
}
    //Resta
int main() {
    int rest1 = 559;
    int rest2 = 66;
    #define resta rest1 - rest2 
    /*
    No es necesario colocar un punto y coma al final de la definición de una macro en C porque la macro 
    se expande en el código fuente y 
    no es necesario terminar una macro con un punto y coma.
    */
    printf("El resultado de la resta es: %d", resta);
    return 0;
}

    //Producto
int main(){
    int prod1 = 5;
    int prod2 = 8;
    #define producto prod1 * prod2
    printf("El resultado es: %d", producto);
}

    //Division

int main(){
    int div1 = 88;
    int div2 = 4;
    #define div div1 / div2
    printf("El resultado del producto es: %d", div);
}

                //Operadores de incremento y decremento

//Decremento = --
int main(){
    int numero = 8;
    numero--; //Baja su valor en 1
    printf("%d", numero);
}

//Incremento = ++
int main(){
    int numero = 8;
    numero++; //Aumenta su valor en 1
    printf("%d", numero);
}
