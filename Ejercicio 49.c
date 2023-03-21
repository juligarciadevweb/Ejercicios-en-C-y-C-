/*

Se conoce el sueldo y los años de antiguedad de un operario.
    Si el sueldo es inferior a 500 y su antiguedad mayor a 10 años, se le otorga un aumento del 20% y se muestra el sueldo

    Si el sueldo es inferior a 500 pero su antiguedad es menor a 10 años se le otorga un aumento del 5%

    Si el sueldo es mayor o igual a 500 mostrar el sueldo en pantalla sin cambios

*/

int main() {
    //Seccion de declaraciones y lectura
    int años, sueldo;
    printf("Ingrese su sueldo: ");
    scanf("%d", &sueldo);
    printf("Ingrese los años de antiguedad: ");
    scanf("%d", &años);

    //Cálculo de nuevos sueldos
    if (sueldo < 500 && años > 10) {
        int aumento10 = sueldo * 0.2;
        int nueva_cifra = sueldo + aumento10;
        printf("El sueldo con el aumento seria: %d", nueva_cifra);
    }
    else if (sueldo < 500 && años <= 10) {
        int aumento5 = sueldo * 0.05;
        int nueva_cifra5 = sueldo + aumento5;
        printf("El sueldo con el aumento seria: %d", nueva_cifra5);
    }
    else if (sueldo >= 500) {
        printf("El sueldo es mayor o igual a 500: %d", sueldo);
    }
    return 0;
}
