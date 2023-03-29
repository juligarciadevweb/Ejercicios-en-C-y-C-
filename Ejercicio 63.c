/*
Ingresar 2 valores (a y b), 
a travez de la funcion sin tipo encontrar el valor de la suma
y mostrar el resultado en la funcion principal
*/


int suma(int a, int b) {
    int resultado = a + b;
    return resultado;
}

int main() {
    int x = 5;
    int y = 10;
    int z = suma(x, y); // llamando a la función suma
    printf("La suma de %d y %d es %d\n", x, y, z);
    return 0;
}
