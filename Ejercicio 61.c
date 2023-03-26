/*

Realizar un programa que imprima 25 términos de la serie 11 - 22 - 33 - 44, etc. 
(No se ingresan valores por teclado)

*/

int main(){
    int X = 0, termino = 11;
    while (X <=25)
    {
        printf("%i", termino);
        printf(" - ");
        X = X + 1;
        termino = termino + 11;
    }
    return 0;
}

/*
printf("%i", termino) es una función en C que se utiliza para imprimir un valor en la pantalla. 
En este caso, %i es un especificador de formato que se utiliza para imprimir un valor entero (en este caso, la variable termino). Por lo tanto, 
printf("%i", termino) imprimirá el valor de la variable termino en la pantalla.

*/
