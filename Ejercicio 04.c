/*

Determinar el promedio final de las notas de un alumno, 
basandote en 3 notas ingresadas
En caso de que el promedio sea mayor a 7 imprimir por pantalla: 
            "El alumno esta promocionado"
En caso de que el promedio sea menor a 7 imprimir por pantalla:
            "El alumno esta regular"

*/

int main(){
    int examen1, examen2, examen3;
    printf("Ingrese la nota del primer examen: ");
    scanf("%d", &examen1);
    printf("Ingrese la nota del segundo examen: ");
    scanf("%d", &examen2);
    printf("Ingrese la nota del tercer examen: ");
    scanf("%d", &examen3);

    float notaFinal;
    notaFinal = (examen1 + examen2 + examen3) / 3;

    if (notaFinal >= 7)
    {
        printf("El alumno esta promocionado");
    } else if (notaFinal < 7)
    {
        printf("El alumno esta desaprobado");
    }
}

int main() {
    //Defino las variables en la cabecera del programa
    int examen1, examen2, examen3;

    //En la parte principal hago un pedido y lectura de los datos correspondientes
    printf("Ingrese la nota del primer examen: ");
    scanf("%d", &examen1);
    printf("Ingrese la nota del segundo examen: ");
    scanf("%d", &examen2);
    printf("Ingrese la nota del tercer examen: ");
    scanf("%d", &examen3);

    #define promedio ((float)(examen1 + examen2 + examen3)/3)
    printf("El promedio del alumno es: %.2f\n", promedio);
    /*
        En resumen, "% .2f\n" se utiliza para imprimir 
        un número de punto flotante con dos decimales después del punto 
        y con una nueva línea al final.
    */
    return 0;
}


























