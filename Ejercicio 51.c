/*
Escribir un programa que solicite ingresar 10 notas de alumnos y 
nos informe cuántos tienen notas mayores o iguales a 7 y cuántos menores.
*/
int main() {
    int notMenor = 0;
    int notMayor = 0;
    int nota;
    int i = 0;
    
    //Uso los ciclos anidados
    while (i < 10) { //Mientras que esa condicion se cumpla se repetira este ciclo
        //Se pediran 10 notas
        printf("Ingrese la nota: ");
        scanf("%d", &nota);
        if (nota >= 7) {
            notMayor++;
        } else {
            notMenor++;
        }
        i++; //No debes olvidarte del contador i que sera importante al 
        //Momento de hacer una limitacion de las notas, las notas iran agregandose a ese contador
    }
    
    printf("Las notas mayores o iguales a 7 son: %d\n", notMayor);
    printf("Las notas menores a 7 son: %d\n", notMenor);
    
    return 0;
}
