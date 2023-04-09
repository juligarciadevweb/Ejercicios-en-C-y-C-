/*

Escribir un programa que lea 10 números enteros y 
luego muestre cuántos valores ingresados fueron múltiplos de 3 y cuántos de 5. 
Debemos tener en cuenta que hay números que son múltiplos de 3 y de 5 a la vez.

num/ 3  = 0
*/


int main() {
    int nml = 10;
    int ingr = 0, number, cont3 = 0, cont5 = 0, cont = 0;

    do {
        printf("Ingrese un numero: ");
        scanf("%d", &number);

        if (number % 3 == 0 && number % 5 == 0) {
            cont++;
        } else if (number % 3 == 0) {
            cont3++;
        } else if (number % 5 == 0) {
            cont5++;
        }

        ingr++;
    } while (ingr < nml);

    printf("Los numeros que son multiplos de 3 y 5 son: %d\n", cont);
    printf("Los numeros que son multiplos de 3 son: %d\n", cont3);
    printf("Los numeros que son multiplos de 5 son %d\n", cont5);

    return 0;
}
