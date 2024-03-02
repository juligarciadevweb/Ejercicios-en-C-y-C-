#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct fecha {
    int dia, mes, anio;
};

struct pacientes {
    char apeynom[60], domicilio[60];
    int dni, numPaciente;
    float altura, peso;
    struct fecha fechaIngreso;
    char actividad[20];
    int horaInicio, horaFin;
};

struct medicos {
    char apeynom[60], contrasena[10];
    int legajo;
    char especialidad[20];
    int horaInicio, horaFin;
};

void registrarPacientes();
void listarPacientes();
void registrarConsulta();

int main() 
{       
    int opcion;

    do {
        printf("                 MODULO RECEPCION:                 ");
        printf("\n1.- Registrar Pacientes.");
    	printf("\n2.- Registrar Consulta.");
        printf("\n3.- Listado de Pacientes.");
        printf("\n4.- Volver al Menú Principal.");
        printf("\n\nOpcion: ");
        scanf("%d", &opcion);

        switch (opcion) 
		{
            case 1:
                registrarPacientes();
                break;
            case 2:
                registrarConsulta();
                break;
            case 3:
                listarPacientes();
                break;
            case 4:
                system("...\\menu.exe");
                break;
            default:
                printf("Opción no válida. Intente de nuevo.");
                break;
        }

    } while (opcion != 4);

    return 0;
}

void registrarPacientes() {
    FILE *arch;
    struct pacientes paciente;
    int numPaciente;

    system("cls");
    printf("Numero de Paciente: ");
    scanf("%d", &numPaciente);

    arch = fopen("pacientes.dat", "rb");
    if (arch != NULL) {
        fread(&paciente, sizeof(struct pacientes), 1, arch);
        while (!feof(arch)) {
            if (paciente.numPaciente == numPaciente) {
                system("cls");
                printf("Numero de paciente ya existe.\n");
                system("pause");
                return;
            }
            fread(&paciente, sizeof(struct pacientes), 1, arch);
        }
    }
    fclose(arch);

    arch = fopen("pacientes.dat", "ab");
    paciente.numPaciente = numPaciente;

    printf("Apellido y Nombre: ");
    fflush(stdin);
    gets(paciente.apeynom);

    printf("Domicilio: ");
    fflush(stdin);
    gets(paciente.domicilio);

    printf("DNI: ");
    scanf("%d", &paciente.dni);

    printf("Peso: ");
    scanf("%f", &paciente.peso);

    printf("Altura: ");
    scanf("%f", &paciente.altura);

    printf("Fecha de Ingreso:\n");
    printf("Dia: ");
    scanf("%d", &paciente.fechaIngreso.dia);
    printf("Mes: ");
    scanf("%d", &paciente.fechaIngreso.mes);
    printf("Año: ");
    scanf("%d", &paciente.fechaIngreso.anio);

    fwrite(&paciente, sizeof(struct pacientes), 1, arch);

    fclose(arch);
    system("pause");
}

void listarPacientes() {
    FILE *arch;
    struct pacientes paciente;
    int nuevoAnio = 0;

    arch = fopen("pacientes.dat", "rb");

    system("cls");

    if (arch == NULL) {
        printf("Primero debe registrar pacientes.\n");
        system("pause");
        return;
    }

    rewind(arch);

    fread(&paciente, sizeof(struct pacientes), 1, arch);

    while (!feof(arch)) {
        printf("Numero de Paciente: %d\n", paciente.numPaciente);
        printf("Apellido y Nombre: %s\n", paciente.apeynom);
        printf("Domicilio: %s\n", paciente.domicilio);
        printf("DNI: %d\n", paciente.dni);
        printf("Peso: %.2f\n", paciente.peso);
        printf("Altura: %.2f\n", paciente.altura);
        printf("Fecha de Pago:\n");
        printf("Dia: %d\n", paciente.fechaIngreso.dia);

        if (paciente.fechaIngreso.mes == 12) {
            printf("Mes: 1\n");
            nuevoAnio = paciente.fechaIngreso.anio + 1;
        } else {
            nuevoAnio = paciente.fechaIngreso.anio;
            printf("Mes: %d\n", paciente.fechaIngreso.mes + 1);
        }

        printf("Año: %d\n\n", nuevoAnio);

        fread(&paciente, sizeof(struct pacientes), 1, arch);
    }

    fclose(arch);

    system("pause");
}

void registrarConsulta() {
    FILE *arch, *arch1;
    struct medicos medico;
    struct pacientes paciente;
    int numPaciente;
    int contPaciente = 0;

    system("cls");

    arch1 = fopen("pacientes.dat", "rb");

    if (arch1 == NULL) {
        printf("Primero debe registrar pacientes.\n");
        system("pause");
        return;
    }

    printf("Numero de Paciente: ");
    scanf("%d", &numPaciente);

    fread(&paciente, sizeof(struct pacientes), 1, arch1);
    while (!feof(arch1)) {
        if (paciente.numPaciente == numPaciente) {
            fclose(arch1);
            break;
        }
        fread(&paciente, sizeof(struct pacientes), 1, arch1);
        contPaciente++;
    }

    if (feof(arch1)) {
        printf("No se encontró el numero de Paciente.\n");
        fclose(arch1);
        system("pause");
        return;
    }

    fclose(arch1);

    arch = fopen("medicos.dat", "rb");

    fread(&medico, sizeof(struct medicos), 1, arch);

    printf("\nEspecialidades disponibles: \n");

    while (!feof(arch)) {
        if (strlen(medico.especialidad) > 1) {
            printf("%s\n", medico.especialidad);
        }
        fread(&medico, sizeof(struct medicos), 1, arch);
    }

    fclose(arch);

    printf("\nSeleccione la especialidad: ");
    fflush(stdin);
    gets(paciente.actividad);

    arch = fopen("medicos.dat", "rb");

    int contador = 0;

    fread(&medico, sizeof(struct medicos), 1, arch);
    while (!feof(arch)) {
        if (strcmp(paciente.actividad, medico.especialidad) == 0) {
            printf("\nEspecialidad: %s\n", medico.especialidad);
            printf("Horario: De %d a %d hs.\n", medico.horaInicio, medico.horaFin);
            printf("Nombre del Medico: %s\n", medico.apeynom);
            contador++;
        }
        fread(&medico, sizeof(struct medicos), 1, arch);
    }

    if (contador == 0) {
        printf("Especialidad inexistente.\n");
        fclose(arch);
        system("pause");
        system("...\\recepcion.exe");
        return;
    }

    fclose(arch);

    arch = fopen("medicos.dat", "rb");

    char nombreMedico[60];
    int horaInicio, horaFin;
    int comprobar;

    do {
        printf("\nSeleccione horario, apellido y nombre del medico: \n");
        printf("Apellido y Nombre: ");
        fflush(stdin);
        gets(nombreMedico);

        printf("Horario de inicio: ");
        scanf("%d", &horaInicio);

        rewind(arch);
        fread(&medico, sizeof(struct medicos), 1, arch);
        while (!feof(arch)) {
            if (strcmp(nombreMedico, medico.apeynom) == 0 && horaInicio == medico.horaInicio) {
                comprobar = 1;
                break;
            } else {
                comprobar = 0;
            }
            fread(&medico, sizeof(struct medicos), 1, arch);
        }
    } while (comprobar != 1);

    if (comprobar) {
        horaFin = medico.horaFin;
    }

    fclose(arch);

    arch1 = fopen("pacientes.dat", "r+b");

    fread(&paciente, sizeof(struct pacientes), 1, arch1);
    while (!feof(arch1)) 
	{
        strcpy(paciente.actividad, paciente.actividad);
        paciente.horaInicio = horaInicio;
        paciente.horaFin = horaFin;
        fseek(arch1, sizeof(struct pacientes) * contPaciente, 0);
        fwrite(&paciente, sizeof(struct pacientes), 1, arch1);
        break;
        fread(&paciente, sizeof(struct pacientes), 1, arch1);
    }
    fclose(arch1);

    system("cls");

    printf("Consulta Registrada Correctamente.\n");
    system("pause");
}
