/*

Hacer un programa que pida al usuario ingresar numeros entre 1 y 7
Segun el numero, se dira a cual dia de la semana representa.

*/

int main(){

    int x;
    printf("Ingrese el numero: ");
    scanf("%d", &x);

switch (x)
{
    case 1 : printf("El dia es el lunes");
    break;

    case 2 : printf("El dia es el martes");
    break;

    case 3 : printf("El dia es el miercoles"); 
    break;
    
    case 4 : printf("El dia es el jueves");
    break;

    case 5 : printf("El dia es el viernes");
    break;

    case 6 : printf("El dia es el sabado");
    break;
    
    case 7 : printf("El dia es el domingo");
    break;

default:
    printf("El numero no es valido");
    break;
}

}
