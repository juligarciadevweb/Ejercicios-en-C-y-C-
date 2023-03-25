/*
Escribir un programa que pida al usuario ingresar las edades de n personas y 
calcule y muestre por pantalla el promedio de edad, 
la cantidad de personas menores de 18 años y la cantidad de personas mayores o iguales a 18 años.

Puedes comenzar definiendo las variables necesarias para almacenar la cantidad de personas, 
la edad de cada una y los contadores para las edades menores e iguales a 18 y mayores a 18. 
Luego, utiliza un bucle para solicitar al usuario las edades de cada persona y actualizar los contadores correspondientes. Por último, realiza los cálculos necesarios para obtener el promedio de edad 
y muestra la información requerida por pantalla. ¡Mucho éxito!*/

int main(){
    int pers, edad, cont18 = 0, cont17 = 0, X = 1, suma = 0; 
    //Iniciamos en 0 las variables que utilizemos para asi poder evitar un comportamiento impredecible
    float promedio; 
    printf("Ingrese la cantidad de personas: ");
    scanf("%d", &pers); //Leemos la cantidad de personas
    while (X <= pers)
    {
        printf("Ingrese la edad de la persona %d: ", X);
        scanf("%d", &edad);
        if (edad >= 18)
        {
            cont18++;
        }
        else
        {
            cont17++;
        }
        suma += edad;
        X++;
    }
    promedio = (float)suma / pers;
    printf("La cantidad de personas ingresadas son: %d\n", pers);
    printf("Las personas menores a 18 son: %d\n", cont17);
    printf("Las personas mayores o iguales a 18 son: %d\n", cont18);
    printf("El promedio de edad es: %.2f\n", promedio);

    return 0;
}
