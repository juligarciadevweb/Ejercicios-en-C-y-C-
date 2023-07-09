                            //Funcion sin tipo
/*Dadas tres notas pertenecientes 
a un alumno de un Instituto Educativo, determine cuál de ellas es mayor.
Use una funcion sin tipo con un parametro por referencia*/

void notMay(int not1, int not2, int not3, int *res)
    {
        if (not1 > not2 && not1 > not3)
        {
            *res = not1;
        } else if (not2 > not1 && not2 > not3)
        {
            *res = not2;
        } else
        {
            *res = not3;
        }
    }

main(int argc, char const *argv[])
{
    int not1, not2, not3; 
    int res = 0;
    printf("Ingrese la primera nota: ");
    scanf("%d", &not1);
    printf("Ingrese la segunda nota: ");
    scanf("%d", &not2);
    printf("Ingrese la tercera nota: ");
    scanf("%d", &not3);
    notMay(not1, not2, not3, &res);
    printf("La nota mayor es: %d", res);    
    return 0;
}
