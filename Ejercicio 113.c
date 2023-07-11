                    //Funcion sin tipo con parametros por valor
/*
Solicite el pago por hora de un empleado y la cantidad de horas trabajadas.
Elaborar una función que reciba como parámetro el valor de la hora y la cantidad de horas trabajadas y nos muestre el total a pagar.
*/
void snt(int horas, int pay)
    {
        int sueldo = pay * horas;
        printf("El sueldo es %d", sueldo);
    }

int main(int argc, char const *argv[])
{
    int horas, pay;
    printf("Ingrese la cantidad de horas trabajadas: ");
    scanf("%d", &horas);
    printf("Ingrese el pago por hora: ");
    scanf("%d", &pay);
    snt(horas, pay);
    return 0;
}

