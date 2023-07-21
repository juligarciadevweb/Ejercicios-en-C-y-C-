/****

En una escuela, se realiza una investigación para determinar los resultados de los exámenes 
de matemáticas de los estudiantes de primaria. 
A tal efecto se cargan los siguientes datos de N estudiantes:
•	EDAD
•	SEXO (1 = Masculino, 2= Femenino).
•	NOTA (0-10).

Se desea conocer:
•	La cantidad de estudiantes de sexo masculino mayores a 10 años que obtuvieron una nota mayor a 7.
•	La cantidad de estudiantes de sexo femenino y masculino que obtuvieron una nota menor a 5.


*********/
#include <stdio.h>

int main()
{
    int edad;
    int sexo;
    int nota;
    int cont1er = 0; //Contador del primer item
    int cont2do = 0; //Contador del segundo item
    int n; //Numero de estudiantes
    int x = 0; // Puntero del while
    printf("Ingrese el numero de estudiantes: ");
    scanf("%d", &n);
    
    while(x < n)
        {
            printf("Ingrese la edad: ");
            scanf("%d", &edad);
            printf("Ingrese el sexo(1 para masculino y 2 para femenino): ");
            scanf("%d", &sexo);
            printf("Ingrese la nota (0-10): ");
            scanf("%d", &nota);
            
            //La cantidad de estudiantes de sexo masculino mayores a 10 años que obtuvieron una nota mayor a 7.
            if(sexo = 1 && edad > 10 && nota > 7)
            {
                cont1er++;
            }
            
            //La cantidad de estudiantes de sexo femenino y masculino que obtuvieron una nota menor a 5.
            if(sexo == 1 || sexo == 2 && nota < 5)
            {
                cont2do++;
            }
            x++;
        }   
        
    printf("La cantidad de estudiantes de sexo masculino mayores a 10 años que obtuvieron una nota mayor a 7: %d", cont1er);
    printf("\n");    
    printf("La cantidad de estudiantes de sexo femenino y masculino que obtuvieron una nota menor a 5 es: %d", cont2do);
    return 0;
}
