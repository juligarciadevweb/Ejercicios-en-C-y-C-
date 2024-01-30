#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*
	Una empresa tiene dos empleados los cuales reciben en sus cuentas de correos diferentes email con
frases de una longitud no superior a 80 caracteres cada frase. Cada cierto número de frases estas deben ser
guardadas en un archivo de texto sin perder lo que se tenía ya guardado en el archivo.
Se Pide: que por medio de un menú se pueda realizar lo siguiente
a- Al abrir el sistema (programa) se deben crear los archivos “Archivo1.txt” y “Archivo2.txt”
b- Crear y Guardar la/s frase/s recibida por el empleado José Luis en el fichero “Archivo1.txt”. La/s
frase/s son ingresada por teclado.
c- Crear y Guardar las frases recibida por la empleada María Emilia en el fichero “Archivo2.txt”.
La/s frase/s son ingresada por teclado.
d- Al final del día ambos archivos son guardados en un único fichero. Deberá combinar ambos archivos mezclados, en un nuevo fichero “Frases.txt”. Es decir, una frase del Archivo1.txt y una del Archivo2.txt, otra del archivo1 otra del archivo2 y así sucesivamente.
e- Mostrar las frases del archivo de José Luis en minúscula.
f- Mostrar las frases del archivo de María Emilia en Mayúscula.
g- Mostrar las frases del Archivo combinado. Donde cada palabra deberá comenzar en mayúscula y el
resto de cada palabra en minúscula.
h- Al salir del sistema, Los archivos, Archivo1.txt y Archivo2.txt, creados deberán ser eliminados físicamente.
Nota: Tener en cuenta que para los ítems d, e, f existen funciones que realizan tales operaciones. También
se puede hacer de manera secuencial, analizando cada palabra. Deberán elegir que aplicar.
*/

// Eliminacion física de un archivo
void eliminarArchivo(const char *nombreArchivo) 
{
    if (remove(nombreArchivo) == 0) 
        printf("El archivo %s fue eliminado correctamente.\n", nombreArchivo);
    else
        printf("Error al eliminar el archivo %s.\n", nombreArchivo);
    
}

// Combinatoria de dos archivos en uno nuevo
void combinarArchivos(const char *nombreArchivo1, const char *nombreArchivo2, const char *nombreArchivoCombinado) 
{
    FILE *archivo1 = fopen(nombreArchivo1, "r");
    FILE *archivo2 = fopen(nombreArchivo2, "r");
    FILE *archivoCombinado = fopen(nombreArchivoCombinado, "w");

    if (archivo1 == NULL || archivo2 == NULL || archivoCombinado == NULL) {
        printf("Error al abrir archivos para combinar.\n");
        exit(1);
    }

    char frase1[81], frase2[81];

    while (fgets(frase1, sizeof(frase1), archivo1) != NULL || fgets(frase2, sizeof(frase2), archivo2) != NULL) {
        if (fgets(frase1, sizeof(frase1), archivo1) != NULL) {
            fprintf(archivoCombinado, "%s", frase1);
        }

        if (fgets(frase2, sizeof(frase2), archivo2) != NULL) {
            fprintf(archivoCombinado, "%s", frase2);
        }
    }

	//Cierre de archivos
    fclose(archivo1);
    fclose(archivo2);
    fclose(archivoCombinado);

    printf("Archivos combinados exitosamente en %s.\n", nombreArchivoCombinado);
}

// Mostrar frases en minúscula
void mostrarEnMinuscula(const char *nombreArchivo) 
{
    FILE *archivo = fopen(nombreArchivo, "r");

    if (archivo == NULL) {
        printf("Error al abrir archivo para mostrar en minúscula.\n");
        exit(1);
    }

    char frase[81];

    printf("Frases de %s en minúscula:\n", nombreArchivo);
    while (fgets(frase, sizeof(frase), archivo) != NULL) {
        for (int i = 0; frase[i]; i++) {
            printf("%c", tolower(frase[i]));
        }
    }

    fclose(archivo);
}

// Mostrar frases en mayúscula
void mostrarEnMayuscula(const char *nombreArchivo) 
{
    FILE *archivo = fopen(nombreArchivo, "r");

    if (archivo == NULL) {
        printf("Error al abrir archivo para mostrar en mayúscula.\n");
        exit(1);
    }

    char frase[81];

    printf("Frases de %s en mayúscula:\n", nombreArchivo);
    while (fgets(frase, sizeof(frase), archivo) != NULL) {
        for (int i = 0; frase[i]; i++) {
            printf("%c", toupper(frase[i]));
        }
    }

    fclose(archivo);
}

// Mostrar frases con la primera letra de cada palabra en mayúscula
void mostrarPrimeraLetraMayuscula(const char *nombreArchivo) 
{
    FILE *archivo = fopen(nombreArchivo, "r");

    if (archivo == NULL) {
        printf("Error al abrir archivo para mostrar primera letra en mayúscula.\n");
        exit(1);
    }

    char frase[81];

    printf("Frases de %s con la primera letra de cada palabra en mayúscula:\n", nombreArchivo);
    while (fgets(frase, sizeof(frase), archivo) != NULL) {
        for (int i = 0; frase[i]; i++) {
            if (i == 0 || (i > 0 && frase[i - 1] == ' ')) {
                printf("%c", toupper(frase[i]));
            } else {
                printf("%c", tolower(frase[i]));
            }
        }
    }

    fclose(archivo);
}

int main() 
{
    FILE *archivo1 = fopen("Archivo1.txt", "w");
    FILE *archivo2 = fopen("Archivo2.txt", "w");

    if (archivo1 == NULL || archivo2 == NULL) {
        printf("Error al crear archivos.\n");
        exit(1);
    }

    fclose(archivo1);
    fclose(archivo2);

    int opcion;
    char frase[81];

    do {
        printf("\nMenú:\n");
        printf("1. Ingresar frase para José Luis (Archivo1.txt)\n");
        printf("2. Ingresar frase para María Emilia (Archivo2.txt)\n");
        printf("3. Combinar archivos y guardar en Frases.txt\n");
        printf("4. Mostrar frases de José Luis en minúscula\n");
        printf("5. Mostrar frases de María Emilia en mayúscula\n");
        printf("6. Mostrar frases combinadas con la primera letra en mayúscula\n");
        printf("7. Salir\n");
        printf("Ingrese opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("Ingrese frase para José Luis (Archivo1.txt): ");
                scanf(" %[^\n]", frase);
                archivo1 = fopen("Archivo1.txt", "a");
                fprintf(archivo1, "%s\n", frase);
                fclose(archivo1);
                break;
            case 2:
                printf("Ingrese frase para María Emilia (Archivo2.txt): ");
                scanf(" %[^\n]", frase);
                archivo2 = fopen("Archivo2.txt", "a");
                fprintf(archivo2, "%s\n", frase);
                fclose(archivo2);
                break;
            case 3:
                combinarArchivos("Archivo1.txt", "Archivo2.txt", "Frases.txt");
                break;
            case 4:
                mostrarEnMinuscula("Archivo1.txt");
                break;
            case 5:
                mostrarEnMayuscula("Archivo2.txt");
                break;
            case 6:
                mostrarPrimeraLetraMayuscula("Frases.txt");
                break;
            case 7:
                // Eliminacion de archivos al salir del programa
                eliminarArchivo("Archivo1.txt");
                eliminarArchivo("Archivo2.txt");
                printf("Saliendo del sistema.\n");
                break;
            default:
                printf("Opción no válida. Intente de nuevo.\n");
        }
    } while (opcion != 7);
    return 0;
}
