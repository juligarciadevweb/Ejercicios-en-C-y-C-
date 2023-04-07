/*
Escribir un programa que lea 10 notas de alumnos y 
nos informe cuántos tienen notas mayores o iguales a 7 y cuántos menores.

Para resolver este problema se requieren tres contadores:

aprobados (Cuenta la cantidad de alumnos aprobados)
reprobados (Cuenta la cantidad de reprobados)
f (es el contador del for)
*/

int main()
{
    //Declaracion de variables y contadores
    int dado = 10;
    int nota;
    int f;
    int aprobados, reprobados;
    for (f = 0; f < dado; f++)
    {
        printf("Ingresa la nota: ");
        scanf("%d", &nota);
        if (nota >= 7)
        {
            aprobados++;
        } else{
            reprobados++;
        }    
    }
    
    printf("Se ingresaron 10 notas");
    printf("\n Hubo %d desaprobados", reprobados);
    printf("\n Hubo %d aprobados", aprobados);
    
    return 0;
}
