//TP4 - Funcion sin tipo - EJ 3
/*
Se ingresan dos números distintos y enteros,
Utilizar en las funciones de este ejercicio parámetros por valor y por referencia.

I) Crear una función para Calcular la superficie de un cuadrado. 
Suponiendo como lado del mismo al mayor valor de los números dados. 
Su resultado debe ser mostrado en la función main.

II) Crear una función para Calcular la superficie de un circulo. Suponiendo como radio del mismo al menor de
los números dados. Su resultado debe ser mostrado en la función main.

En este problema se trabajar con tres funciones definidas por el programador, para nuestro caso serán
funciones sin tipo, cuyos prototipos son los siguientes:

Prototipo para, Calcular el menor y el mayor. void determinarMayorMenor (int May, int Men);
Prototipo para, Calcular la Área del Cuadrado. void areaCuadrado (int May, int SupCua);
Prototipo para, Calcular la Área del circulo. void areaCirculo(int Men, int SupCil);
*/
void determinarMayorMenor (int num1, int num2,int *May, int *Men)
    {
        if (num1 > num2)
        {
            *May = num1;
            *Men = num2;
        }else
        {
            *May = num2;
            *Men = num1;
        }
    }

void areaCuadrado (int May, int *SupCua)
    {
        *SupCua = May * May;
    }

void areaCilindro(int Men, float *SupCil)
    {
        *SupCil = 3.14 * (Men * Men);
    }

int main()
{
    int May = 0; //Numero mayor
    int Men = 0; //Numero menor
    int SupCua = 0;//Superficie del cuadrado
    float SupCil = 0; //Area del circulo
    int num1, num2;
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);
    determinarMayorMenor(num1, num2, &May, &Men);
    areaCuadrado(May, &SupCua);
    areaCilindro(Men, &SupCil);

    printf("El area del cuadrado es %d", SupCua);
    printf("\n");
    printf("El area del circulo es %0.2f", SupCil);
    return 0;
}
