/* Realiza un programa que solicite un número entero positivo por teclado y 
verifique si es primo o no. */


int main() {
    int num, i, es_primo = 1;

    printf("Introduce un número entero positivo: ");
    scanf("%d", &num);

    if (num <= 1) {
        es_primo = 0;
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                es_primo = 0;
                break;
            }
        }
    }

    if (es_primo == 1) {
        printf("%d es un número primo.\n", num);
    } else {
        printf("%d no es un número primo.\n", num);
    }

    return 0;
}
