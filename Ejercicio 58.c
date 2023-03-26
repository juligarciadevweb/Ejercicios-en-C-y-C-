/*

En una empresa trabajan n empleados cuyos sueldos oscilan entre $100 y $500, 
realizar un programa que lea los sueldos que cobra cada empleado e informe cuántos empleados cobran entre $100 y $300 y cuántos cobran más de $300. 
Además el programa deberá informar el importe que gasta la empresa en sueldos al personal.

*/

int main(){
    int X = 1, n, sueldo, suma = 0, cont1 = 0, cont2 = 0;
    printf("Ingrese el numero de empleados: ");
    scanf("%d", &n);
    while (X <= n)
    {
        printf("Ingrese el sueldo");
        scanf("%d", &sueldo);
            if (sueldo >= 100 && sueldo <= 300)
            {
                cont1++; //Cuenta los sueldos mayores a 100 pero menores a 300
            } else if(sueldo > 300){
                cont2 ++; //Cuando se ingrese el sueldo mayor a 300 el contador aumenta
            }
            suma = suma + sueldo;
        X = X + 1;
    }

    printf("Los empleados que cobran entre 100 y 300 son %d", cont1);
    printf("Los empleados que cobran 300 son %d", cont2);
    printf("La empresa debera pagar %d", suma);   
    return 0;
}
