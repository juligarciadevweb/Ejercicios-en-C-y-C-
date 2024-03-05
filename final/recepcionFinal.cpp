#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#define SIMBOLOS_VALIDOS "!@#$%^&*()_-+=<>?/."

struct fecha {
    int dia, mes, anio;
};

struct pacientes {
    char apeynom[60], domicilio[60];
    int dni, numPaciente;
    float altura, peso;
    fecha fechaIngreso;
    char actividad[20];
    int horaInicio, horaFin;
};

struct medicos {
    char apeynom[60], contrasena[10];
    char especialidad[20];
    int dni;
    int horaInicio, horaFin;
};

char username[50];
char password[50];
    
void registrarPacientes();
void listarPacientes();
void registrarConsulta();
int validarNombreUsuarioRecep(char* username);
int validarContrasenaRecep(char* password);
bool iniciarSesionRecep();

int main() 
{       
system("color 70");
    int opcion;
	    
    	printf("               Recepcion               \n");
    	printf("Iniciar sesion\n");
		if (!iniciarSesionRecep()) 
		{
            printf("Error en inicio de sesion.\n");
        } else {
			printf("1 - Registrar Pacientes\n");
        	printf("2 - Registrar Turno\n");
        	printf("3 - Listar pacientes\n");
        	printf("\nOpcion: ");
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
            	default:
                	system("ULTIMO TFI.exe");
                break;
        	}
		}
    return 0;
}

void registrarPacientes() 
{
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
        //system("...\\recepcion.exe");
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

int validarNombreUsuarioRecep(char* username) 
{
    int longitud = strlen(username);

    // Comprobamos la longitud
    if (longitud < 6 || longitud > 10) {
        return 0;
    }

    // Comprobamos que comienza con una letra minúscula
    if (!islower(username[0])) {
        return 0;
    }

    // Contamos las letras mayúsculas y los dígitos
    int letrasMayusculas = 0;
    int digitos = 0;
    for (int i = 0; i < longitud; i++) {
        if (isupper(username[i])) {
            letrasMayusculas++;
        } else if (isdigit(username[i])) {
            digitos++;
        }
        // Comprobamos que el carácter sea un símbolo válido
        else if (!isalpha(username[i]) && !strchr(SIMBOLOS_VALIDOS, username[i])) {
            return 0;
        }
    }

    // Comprobamos que hay al menos 2 letras mayúsculas y como máximo 3 dígitos
    if (letrasMayusculas < 2 || digitos > 3) {
        return 0;
    }

    // Si hemos llegado hasta aquí, el nombre de usuario es válido
    return 1;
}

int validarContrasenaRecep(char* password) {
    int longitud = strlen(password);

    // Comprobamos la longitud
    if (longitud < 6 || longitud > 10) {
        return 0;
    }

    // Comprobamos que contiene al menos una letra mayúscula, una letra minúscula y un número
    int tieneMayuscula = 0;
    int tieneMinuscula = 0;
    int tieneDigito = 0;
    for (int i = 0; i < longitud; i++) {
        if (isupper(password[i])) {
            tieneMayuscula = 1;
        } else if (islower(password[i])) {
            tieneMinuscula = 1;
        } else if (isdigit(password[i])) {
            tieneDigito = 1;
        }
    }
    if (!tieneMayuscula || !tieneMinuscula || !tieneDigito) {
        return 0;
    }

    // Si hemos llegado hasta aquí, la contraseña es válida
    return 1;
}

bool iniciarSesionRecep() 
{
	_flushall();
    printf("Introduce tu nombre de usuario: ");
    gets(username);
    printf("Introduce tu contraseña: ");
    gets(password);
	
    if (validarNombreUsuarioRecep(username) && validarContrasenaRecep(password)) 
	{
        printf("Inicio de sesión exitoso!\n");
        return true;
    } else {
        printf("Nombre de usuario o contraseña incorrectos.\n");
        return false;
    }
}
