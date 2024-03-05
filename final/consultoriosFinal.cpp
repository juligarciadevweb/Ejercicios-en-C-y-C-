#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define SIMBOLOS_VALIDOS "!@#$%^&*()_-+=<>?/."

struct fecha {
    int dia, mes, anio;
};

struct pacientes {
    char apeynom[60], domicilio[60];
    int dni;
    char localidad[60];
    struct fecha fechaNacimiento;
    struct fecha fec;
    int peso, talla;
    char telefono[25];
};

struct historia_clinica 
{
    struct fecha fecha_atencion;
    char profesional[50];
    char descripcion[380];
};

void listarPacientes();
void registrarHistoriaClinica();
int validarNombreUsuario(char* username);
int validarContrasena(char* password);
bool iniciarSesion();

char username[50];
char password[50];

int main() 
{
	system("color 70");
    int opcion;

        printf("                   CONSULTORIOS                  \n");
        printf("\nIniciar sesion\n");
		
		if (!iniciarSesion()) 
		{
            printf("Error en inicio de sesion.\n");
        } else {
			printf("2 - Visualizar lista de Espera de Turnos\n");
        	printf("3 - Registrar historia clínica.\n");
        	printf("4 - Volver al Menu Principal.\n");
        	printf("\nOpcion: ");
        	scanf("%d", &opcion);
			switch(opcion) 
			{
				case 1:
                	listarPacientes();
                break;
            	
				case 2:
                	registrarHistoriaClinica();
                break;
            	
				case 3:
                	printf("Salir\n");
                break;
                
				default:
            	    printf("Opcion no valida.\n");
                break;
        	}
		}

    return 0;
}

void listarPacientes() {
    FILE *arch;
    struct pacientes paciente;

    arch = fopen("pacientes.dat", "rb");

    if (arch == NULL) {
        printf("No hay pacientes registrados en la base de datos.\n");
        system("pause");
        return;
    }

    rewind(arch);
    
    while (fread(&paciente, sizeof(struct pacientes), 1, arch)) {
        printf("Nombre del paciente: %s\n", paciente.apeynom);
        printf("DNI: %d\n", paciente.dni);
        printf("Domicilio: %s\n", paciente.domicilio);
        printf("Localidad: %s\n", paciente.localidad);
        printf("Fecha de nacimiento: %d/%d/%d\n", paciente.fechaNacimiento.dia, paciente.fechaNacimiento.mes, paciente.fechaNacimiento.anio);
        printf("Teléfono: %s\n", paciente.telefono);
    }

    fclose(arch);
    system("pause");
}

void registrarHistoriaClinica() {
    FILE *arch;
    struct historia_clinica historia;
    char apeynom[60];

    printf("Ingrese el nombre del paciente: ");
    fflush(stdin);
    fgets(apeynom, 60, stdin);
    apeynom[strcspn(apeynom, "\n")] = 0; // Eliminar el salto de línea

    arch = fopen("historias_clinicas.dat", "ab");

    if (arch == NULL) {
        printf("Error al abrir el archivo de historias clínicas.\n");
        system("pause");
        return;
    }

    printf("Ingrese la fecha de atención (DD MM AAAA): ");
    scanf("%d %d %d", &historia.fecha_atencion.dia, &historia.fecha_atencion.mes, &historia.fecha_atencion.anio);

    printf("Ingrese el nombre del profesional: ");
    fflush(stdin);
    fgets(historia.profesional, 50, stdin);
    historia.profesional[strcspn(historia.profesional, "\n")] = 0; // Eliminar el salto de línea

    printf("Ingrese la descripción de la historia clínica (máx. 380 caracteres): ");
    fflush(stdin);
    fgets(historia.descripcion, 380, stdin);
    historia.descripcion[strcspn(historia.descripcion, "\n")] = 0; // Eliminar el salto de línea

    fwrite(&historia, sizeof(struct historia_clinica), 1, arch);

    fclose(arch);
}

int validarNombreUsuario(char* username) {
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

int validarContrasena(char* password) {
    int longitud = strlen(password);
    // Comprobamos la longitud
    if (longitud < 6 || longitud > 32) {
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
        } else {
            // La contraseña contiene un carácter no alfanumérico
            return 0;
        }
    }
    if (!tieneMayuscula || !tieneMinuscula || !tieneDigito) {
        return 0;
    }

    // Comprobamos que no tiene más de 3 caracteres numéricos consecutivos
    for (int i = 0; i < longitud - 2; i++) {
        if (isdigit(password[i]) && isdigit(password[i+1]) && isdigit(password[i+2])) {
            return 0;
        }
    }

    // Comprobamos que no tiene 2 caracteres consecutivos que refieran a letras alfabéticamente consecutivas
    for (int i = 0; i < longitud - 1; i++) {
        if ((isalpha(password[i]) && isalpha(password[i+1])) && 
            (tolower(password[i+1]) - tolower(password[i]) == 1)) {
            return 0;
        }
    }

    // Si hemos llegado hasta aquí, la contraseña es válida
    return 1;
}

bool iniciarSesion() {
    printf("Introduce tu nombre de usuario: ");
    scanf("%s", username);
    printf("Introduce tu contraseña: ");
    scanf("%s", password);

    if (validarNombreUsuario(username) && validarContrasena(password)) {
        printf("Inicio de sesion exitoso!\n");
        return true; // Devuelve verdadero si tanto el nombre de usuario como la contraseña son válidos
    } else {
        printf("Nombre de usuario o contrasena incorrectos.\n");
        return false; // Devuelve falso si alguno de los dos no es válido
    }
}


