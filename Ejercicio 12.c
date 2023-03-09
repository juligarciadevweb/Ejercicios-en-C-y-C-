/*

Ingresar tres números enteros
 realizar la suma de los dos primeros, si el tercer número ingresado es 1;
 realizar la resta, si el tercer número es 2
 multiplicarlos si el tercer número es un 3.


*/

int A, B, X, C; //Definimos 4 variables, X seria nuetra variable principal

int main() {
    printf("INGRESE EL VALOR DE A:");
        scanf ("%d",&A);
    printf("INGRESE EL VALOR DE B:");
        scanf ("%d",&B);
    printf("INGRESE EL VALOR DE X (1) SUMAR (2) RESTAR (3) MULTIPLICAR:");
        scanf ("%d",&X);
switch (X) //Hacemos el switch para la variable x
    {
        case 1 : C = A + B;
            printf("RESULTADO: %d",C);
 break; //Rompe el ciclo asi no se siga ejecutando el programa
        case 2 : C = A - B;
            printf("RESULTADO: %d",C);
 break;
        case 3 : C = A * B;
            printf("RESULTADO: %d",C);
 break;
        default : printf("No hay operaciones a realizar"); 
        //Se realiza si no hay seleccionadas ninguna de las otras opciones
    }
}
