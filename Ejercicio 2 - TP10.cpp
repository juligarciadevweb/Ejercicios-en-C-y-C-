/*
Crear un archivo de texto en donde se guardaran los siguientes de N estudiante, cada dato (campo)
que se almacenan en el archivo son los siguientes
 	Nombre.
	Apellidos.
	Carrera que estudia.
 	Nota promedio.

1) Realizar la carga de los N estudiantes, tenga en cuenta que cada uno de los datos estará separado por un punto y como “;” y los datos de cada estudiante debe ocupar una línea en el
archivo.

2) Realizar el listado de los datos guardados.

3) Contar la cantidad de apellidos iguales que tiene el archivo.

4) Contar cuantos estudiantes cursan la misma carrera.

5) Ingresar el apellido y nombre de un estudiante y mostrar la carrera que estudia y su nota
promedio. Tenga en cuenta que los datos se pueden ingresar de diferente forma ej: todo en
mayúscula, minúscula, alguna mayúscula.

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct Estudiante {
    char nombre[50];
    char apellidos[50];
    char carrera[50];
    float notaPromedio;
};

void toLowerCase(char *str) 
{
    for (int i = 0; str[i]; i++) 
	{
        str[i] = tolower(str[i]);
    }
}

int contarApellidosIguales(char apellido[], FILE *fp) 
{
    rewind(fp);
    int contador = 0;
    char line[150];

    while (fgets(line, sizeof(line), fp) != NULL) 
	{
        char apellidoGuardado[50];
        sscanf(line, "%*[^;];%[^;]", apellidoGuardado);
        toLowerCase(apellido);
        toLowerCase(apellidoGuardado);

        if (strcmp(apellido, apellidoGuardado) == 0)
            contador++;
    }

    return contador;
}

int contarEstudiantesMismaCarrera(char carrera[], FILE *fp) 
{
    rewind(fp);
    int contador = 0;
    char line[150];

    while (fgets(line, sizeof(line), fp) != NULL) {
        char carreraGuardada[50];
        sscanf(line, "%*[^;];%*[^;];%[^;]", carreraGuardada);

        toLowerCase(carrera);
        toLowerCase(carreraGuardada);

        if (strcmp(carrera, carreraGuardada) == 0)
            contador++;
    }

    return contador;
}

void buscarEstudiante(char apellido[], char nombre[], FILE *fp) 
{
    rewind(fp);
    char line[150];

    while (fgets(line, sizeof(line), fp) != NULL) 
	{
        char apellidoGuardado[50], nombreGuardado[50], carrera[50];
        float notaPromedio;
        sscanf(line, "%[^;];%[^;];%[^;];%f", nombreGuardado, apellidoGuardado, carrera, &notaPromedio);
        toLowerCase(apellido);
        toLowerCase(apellidoGuardado);
        toLowerCase(nombre);
        toLowerCase(nombreGuardado);

        if (strcmp(apellido, apellidoGuardado) == 0 && strcmp(nombre, nombreGuardado) == 0) {
            printf("\nDatos del estudiante:\n");
            printf("Nombre: %s %s\n", nombreGuardado, apellidoGuardado);
            printf("Carrera: %s\n", carrera);
            printf("Nota promedio: %.2f\n", notaPromedio);
            return;
        }
    }
    printf("\nEstudiante no encontrado.\n");
}

int main() {
    int n;
    printf("Ingrese la cantidad de estudiantes: ");
    scanf("%d", &n);

    FILE *fp;
    fp = fopen("estudiantes.txt", "w");

    if (fp == NULL) {
        printf("Error al abrir el archivo.");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        struct Estudiante est;

        printf("\nIngrese datos para el estudiante %d:\n", i + 1);
        printf("Nombre: ");
        scanf("%s", est.nombre);
        printf("Apellidos: ");
        scanf("%s", est.apellidos);
        printf("Carrera: ");
        scanf("%s", est.carrera);
        printf("Nota promedio: ");
        scanf("%f", &est.notaPromedio);

        fprintf(fp, "%s;%s;%s;%.2f\n", est.nombre, est.apellidos, est.carrera, est.notaPromedio);
    }

    fclose(fp);

    printf("\nListado de datos guardados:\n");
    fp = fopen("estudiantes.txt", "r");

    if (fp == NULL) {
        printf("Error al abrir el archivo.");
        return 1;
    }

    char line[150];
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);

    char apellidoBuscado[50];
    printf("\nIngrese un apellido para contar cuántos estudiantes tienen el mismo apellido: ");
    scanf("%s", apellidoBuscado);

    int cantidadApellidosIguales = contarApellidosIguales(apellidoBuscado, fp);
    printf("Cantidad de estudiantes con el apellido %s: %d\n", apellidoBuscado, cantidadApellidosIguales);

    char carreraBuscada[50];
    printf("\nIngrese una carrera para contar cuántos estudiantes la cursan: ");
    scanf("%s", carreraBuscada);

    int cantidadEstudiantesMismaCarrera = contarEstudiantesMismaCarrera(carreraBuscada, fp);
    printf("Cantidad de estudiantes que cursan la carrera %s: %d\n", carreraBuscada, cantidadEstudiantesMismaCarrera);

    char apellidoBuscar[50], nombreBuscar[50];
    printf("\nIngrese el apellido del estudiante a buscar: ");
    scanf("%s", apellidoBuscar);
    printf("Ingrese el nombre del estudiante a buscar: ");
    scanf("%s", nombreBuscar);

    buscarEstudiante(apellidoBuscar, nombreBuscar, fp);

    fclose(fp);

    return 0;
}
