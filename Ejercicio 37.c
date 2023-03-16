/*

Escribir un programa que pida al usuario un número entero positivo y calcule la suma de los dígitos de dicho número.

*/

int main(){
    int num, suma = 0, digito;
    printf("Ingrese el primer numero: ");
    scanf("%d", &num);

    do
    {
        digito = num % 10;  // obtener el último dígito
        //Divide el numero en 10 y suma los digitos con el resto
        suma += digito;    // sumar el último dígito a la suma
        //Ej: si le damos el nro 1008 nos dara 9
        //Ej: si le damos el nro 2800 nnos dara 10
        num /= 10;         // eliminar el último dígito
    } while (num > 0);

    printf("La suma de los digitos es %d\n", suma);

    return 0;

}

/*

En la línea digito = num % 10;, se utiliza el operador módulo % para obtener el resto de la división entre num y 10. Este cálculo nos permite obtener el último dígito del número ingresado por el usuario. Por ejemplo, si num es 123, entonces num % 10 será igual a 3, que es el último dígito.
En la siguiente línea, suma += digito;, se añade el último dígito (digito) a la variable suma, que es una variable acumulativa que se utiliza para ir sumando los dígitos del número.
En la línea num /= 10;, se divide num entre 10 mediante la operación de división entera /=. Esto tiene como resultado eliminar el último dígito del número, ya que se está realizando una división entera y el resultado será la parte entera de la división. Por ejemplo, si num es 123, entonces num /= 10 será igual a 12, eliminando el último dígito.
Estas tres líneas de código se ejecutan dentro del ciclo do-while, lo que significa que se repetirán hasta que ya no queden dígitos por procesar en el número num. Es decir, el ciclo se repetirá tantas veces como dígitos tenga el número ingresado por el usuario. Al finalizar el ciclo, la variable suma contendrá la suma de todos los dígitos del número ingresado.

*/
