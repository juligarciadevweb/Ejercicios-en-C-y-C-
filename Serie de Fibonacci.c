/*

Realizar un programa que imprima los primeros 20 términos de la serie de Fibonacci. 
La serie de Fibonacci comienza con los términos 0 y 1, 
y a partir de ellos cada término es la suma de los dos anteriores (0, 1, 1, 2, 3, 5, 8, 13, 21, ...).

*/

int main(){
    int X = 2, terminos = 0, primerTerm = 1, segTer = 1;
    printf("%d--%d--", primerTerm, segTer); // Imprimir los primeros dos términos
    while (X <= 20)
    {   
        terminos = primerTerm + segTer; //Va sumando los terminos
        printf("%d--", terminos); //Imprime cada nuevo termino saliendo de la operacion anterior
        primerTerm = segTer; // Actualizar los términos
        segTer = terminos; //Hace esto para imprimir los siguientes terminos
        X = X + 1; //Va aumentando el contador
    }
    return 0;
}
