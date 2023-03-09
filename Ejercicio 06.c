/*

Escribe un programa que lea un número entero del usuario y determine si es positivo, 
negativo o cero. 
Luego, imprime un mensaje en la pantalla indicando si el número es positivo, negativo o cero.

Puedes utilizar la estructura switch para implementar esta funcionalidad.

*/

int main() {
    int num;
    printf("Ingrese un numero entero: ");
    scanf("%d", &num);

    switch(num > 0) { //En caso de que sea mayor a 0
        case 1:
            printf("%d es un numero positivo\n", num);
            break;
        case 0:
        //Usamos un switch anidado 
            switch(num < 0) { //En caso de que sea menor a 0
                case 1:
                    printf("%d es un numero negativo\n", num);
                    break;
                case 0:
                    printf("%d es cero\n", num);
                    break;
            }
            break;
    }

    return 0;
}
