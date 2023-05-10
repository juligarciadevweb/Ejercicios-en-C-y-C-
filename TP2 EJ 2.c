/*
Dadas tres notas pertenecientes a un alumno, determine cuál de ellas es mayor.
*/
int main(){
    int a,b,c;
    printf("Ingrese la primera nota: ");
    scanf("%d", &a);
    printf("Ingrese la segunda nota: ");
    scanf("%d", &b);
    printf("Ingrese la tercera nota: ");
    scanf("%d", &c);

    if (a>b && a>c)
    {
        printf("La primera nota es mayor");
    }
    else if (b>a && b>c)
    {
        printf("La segunda nota es mayor");
    }
    else
    {
        printf("La tercera nota es mayor");
    }
    
    return 0;
}
