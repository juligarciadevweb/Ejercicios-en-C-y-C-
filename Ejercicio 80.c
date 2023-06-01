/*
Ingresar el legajo (representado por un número) y la nota de 100 alumnos
obtenida en un examen parcial. Mostrar el legajo y nota de aquellos alumnos que aprobaron
dicho examen. El examen se aprueba con 4. 
*/

int legajo;
int nota;
int numAlu = 0;
int contAp = 0;

int main()
{
    while (numAlu < 100)
    {
        printf("Ingrese el legajo: ");
            scanf("%d", &legajo);
        printf("Ingrese la nota: ");
            scanf("%d", &nota);

        if (nota >= 4)
        {
            printf("El legajo es: %d", legajo);
            printf("La nota es: %d", nota);
            contAp++;   
        }
        
        numAlu++;
    }
    
    printf("La cantidad de alumnos aprobados es: %d", contAp);
    return 0;
}

