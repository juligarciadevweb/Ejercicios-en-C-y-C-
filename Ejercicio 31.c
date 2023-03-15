/*

Suponga la existencia de un archivo que guarda la información de los N alumnos de una Escuela Secundaria que se encuentra en el programa Conectar Igualdad. Dicho archivo llamado "alumnos.dat", presenta la siguiente configuración de registro lógico: 1) Legajo del alumno 2) Curso al que asiste 3) Cantidad de materias que cursa 4) Cantidad de materias aprobadas. Se solicita:

a) A través de una función indicar los legajos de los alumnos que poseen aprobadas todas las materias y están en 6to año, que serán los beneficiarios de las netbook. 
b) Baja lógica de todos los alumnos que están en 6 año y tienen todas las materias aprobadas, ya que egresan de la escuela.

*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_ALUMNOS 100

typedef struct {
    int legajo;
    int curso;
    int cantMaterias;
    int cantMateriasAprobadas;
} Alumno;

// Función para obtener los legajos de los alumnos con todas las materias aprobadas en 6to año
void legajosAprobadosEnSexto(Alumno alumnos[], int numAlumnos) {
    printf("Los siguientes alumnos tienen todas las materias aprobadas en 6to año:\n");
    for(int i=0; i<numAlumnos; i++) {
        if(alumnos[i].curso == 6 && alumnos[i].cantMaterias == alumnos[i].cantMateriasAprobadas) {
            printf("%d\n", alumnos[i].legajo);
        }
    }
}

// Función para dar de baja a los alumnos con todas las materias aprobadas en 6to año
void darBajaAprobadosEnSexto(Alumno alumnos[], int* numAlumnos) {
    int i = 0;
    while(i < *numAlumnos) {
        if(alumnos[i].curso == 6 && alumnos[i].cantMaterias == alumnos[i].cantMateriasAprobadas) {
            for(int j=i; j<*numAlumnos-1; j++) {
                alumnos[j] = alumnos[j+1];
            }
            (*numAlumnos)--;
        } else {
            i++;
        }
    }
}

int main() {
    Alumno alumnos[MAX_ALUMNOS];
    int numAlumnos = 0;

    // Abrir archivo
    FILE *archivo = fopen("alumnos.dat", "rb");
    if(archivo == NULL) {
        printf("No se pudo abrir el archivo.");
        return 1;
    }

    // Leer datos del archivo y cargarlos en el arreglo de alumnos
    Alumno alumno;
    while(fread(&alumno, sizeof(Alumno), 1, archivo) == 1 && numAlumnos < MAX_ALUMNOS) {
        alumnos[numAlumnos] = alumno;
        numAlumnos++;
    }

    // Cerrar archivo
    fclose(archivo);

    // Obtener legajos de los alumnos con todas las materias aprobadas en 6to año
    legajosAprobadosEnSexto(alumnos, numAlumnos);

    // Dar de baja a los alumnos con todas las materias aprobadas en 6to año
    darBajaAprobadosEnSexto(alumnos, &numAlumnos);

    // Abrir archivo para escritura
    archivo = fopen("alumnos.dat", "wb");
    if(archivo == NULL) {
        printf("No se pudo abrir el archivo.");
        return 1;
    }

    // Escribir los datos actualizados en el archivo
    for(int i=0; i<numAlumnos; i++) {
        fwrite(&alumnos[i], sizeof(Alumno), 1, archivo);
    }

    // Cerrar archivo
    fclose(archivo);

    printf("Se dieron de baja a los alumnos con todas las materias aprobadas en 6to año.\n");

    return 0;
}

