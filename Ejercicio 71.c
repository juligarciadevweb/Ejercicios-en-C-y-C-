/*

Desarrollar un programa que permita la carga de 10 valores por teclado 
y nos muestre posteriormente la suma de los valores ingresados y su promedio. 
Lo resolveremos empleando la estructura For

*/

int main() {
    //Declaracion de variables
    int suma = 0;
    int numbers;
    int i;
    int dad = 10;
    float prom;

    //Operacion principal
    for (i = 0; i < dad; i++) {
        printf("Ingrese el numero: ");
        scanf("%d", &numbers);
        suma += numbers;
    }

    prom = (float)suma / dad;

    printf("La suma es %d\n", suma);
    printf("El promedio es %.2f\n", prom);

    return 0;
}
