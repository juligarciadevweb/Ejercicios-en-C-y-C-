/*

Se recibe la nota niveladora de un alumno al curso de inglés y su edad. La academia lo inscribirá
en un curso y división según lo siguiente:
✓ Si aprobó el examen, va a la división A.
✓ Si no aprobó el examen, va la división B.
✓ Si la edad va hasta 10 años inclusive, va al curso 1. Si la edad va de 10 a 20 años inclusive, va al curso 2. Si la edad es mayor a 20 años, va al curso 3.
✓ Muestre en pantalla el curso y la división en que esta registrado el alumno

*/


int main(){
    int edad, nota;
    printf("Ingrese la nota (1 para aprobado y 2 para reprobado): ");
    scanf("%d", &nota);
    printf("Ingrese la edad: ");
    scanf("%d", &edad);

    switch (nota)
    {
    case 1:
        printf("Va a la division A");
        break;
    
    default:
        printf("Va a la division B");
        break;
    }

    if (edad < 10)
    {
        printf("\nVa al curso 1");
    }
    else if (edad > 10 && edad < 20)
    {
        printf("\nVa al curso 2");
    }
    else
    {
        printf("\nVa al curso 3");
    }

    return 0;
    
}
