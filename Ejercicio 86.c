/*
En una empresa con N empleados, se necesita obtener el numero del empleado 
y el sueldo del trabajador con mayor sueldo en la empresa
*/

#include <stdio.h>

int main()
{
    int sm = 1;
    int sueldoMayor = 0;
    int numeroEmpleadoMayor = 0;
    int NumeroEmpleado = 0;
    int n; //Numero de empleados con los que vamos a trabajar
    printf("Ingrese el numero de empleados que se cargaran: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int sueldo;
        int numerEmpleado;
        printf("Ingrese el sueldo del empleado: ");
        scanf("%d", &sueldo);
        printf("Ingrese el numero del empleado: ");
        scanf("%d", &numerEmpleado);

        if (sueldo > sueldoMayor)
        {
            sueldoMayor = sueldo; //Se va haciendo una asignacion del sueldo para 
            numeroEmpleadoMayor = numerEmpleado;
        }
    }
    printf("El numero de empleado mayor es %d", numeroEmpleadoMayor);
    printf("\nEl sueldo mayor es %d", sueldoMayor);
    return 0;
}
