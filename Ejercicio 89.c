/*
Se ingresa un valor superior a 600, 
que representa una cantidad en minutos realizar una función con tipo para mostrar en la función main.
I)Su equivalente en horas.
II) Su equivalente en minutos.
III) Su equivalente en segundo.

*/

//Defino una funcion con tipo que calcule los 3 items
int calculo(int value)//Le especifico el tipo de dato del parametro 
    {
        //Defino las variables secundarias
        float horas = value / 60; //Uso el tipo de dato flotante para obtener mayor precision
        float seg = (value / horas) * 3600; //Aplico una regla de 3 simples
        float minutos = seg / 60;  //Uso el resultado de la variable anterior
        //Muestro los resultados prolijamente
        printf("\nEl equivalente en minutos es: %0.2f",minutos);
        printf("\nEl equivalente en horas es: %0.2f",horas);
        printf("\nEl equivalente en segundos es: %0.2f",seg);
    }

main(int argc, char const *argv[])
{
    //Defino el primer parametro como tipo entero
    int value; 
    printf("Ingrese la cantidad de minutos: ");
    scanf("%d", &value); //Leemos el parametro

    if (value > 600)
    {
        calculo(value); //Invoco la funcion en caso de cumplida la condicion
    }else
    {
        printf("No ingreso un valor superior a 600");
    }
    
    return 0;
}
