//Funcion con tipo

/*
Realiza un programa en C que solicite al usuario ingresar una serie de números enteros 
positivos. 
El programa debe contar la cantidad de números ingresados que son múltiplos de 5 
y devolver dicho resultado utilizando una función con tipo.
*/

int mult5(int num, int n, int x)
    {
        int cont = 0; //Acordate de declarar las variables una sola vez
        while (x < n)
        {
            printf("Ingrese un numero: ");
            scanf("%d", &num);
            if (num % 5 == 0)
                {
                    cont++;
                }
            x++;
        }
        return cont;
    }

int main()
{
    int num;
    int n;
    int x = 0;
    printf("Ingrese la cantidad de numeros a trabajar: ");
    scanf("%d", &n);
    int xz = mult5(num, n, x);
    printf("\nLos multiplos de 5 son: %d", xz);
    return 0;
}
