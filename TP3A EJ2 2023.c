/*
Dadas tres notas pertenecientes a un alumno de un Instituto Educativo, determine cuál de
ellas es mayor
*/

int main()
{
    int nota1;
    int nota2;
    int nota3;

    printf("Ingrese la primera nota ");
    scanf("%d", &nota1);
    printf("Ingrese la segunda nota ");
    scanf("%d", &nota2);
    printf("Ingrese la tercera nota ");
    scanf("%d", &nota1);

    if (nota1 > nota2 && nota1 > nota3)
    {
        printf("La primera nota es mayor ");
    } if (nota2 > nota1 && nota2 > nota3)
    {
        printf("La segunda nota es mayor ");
    }
    else
    {
        printf("La tercera nota es mayor ");
    }

    return 0;
}
