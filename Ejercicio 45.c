//4 - Imprimir los números del 2 al 100 pero de 2 en 2 (2,4,6,8 ....100)

int main(){
    int x;
    int x = 2;
    while (x <= 100)
    {
        printf("%d", x);
        printf(" _ ");
        x = x + 2;
    }
    return 0;
}
