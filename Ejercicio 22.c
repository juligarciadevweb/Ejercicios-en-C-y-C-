/*Realize un programa que 
calcule el promedio de la nota de 10 estudiantes en un examen final*/ 

int main(){
    int i, notas; 
    int sumaNotas = 0;

    for (i = 0; i <= 10; i++) //Mientras el numero de valores ingresados sea menor a 10 se realizaran estas acciones
    {   //Se ingresan como maximo 10 notas
        printf("Ingrese la nota del alumno");
        scanf("%d", &notas);

        sumaNotas += notas; 
    }

    int promedio = sumaNotas / 10;
    printf("El promedio es: %d", promedio);
    return 0;
    
}
