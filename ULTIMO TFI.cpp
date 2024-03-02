#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    printf("                    BIENVENIDO PROFESOR                 ");
    int opc = 0;
    
    do {
        printf("\nA que modulo desea ingresar?: ");
        printf("\n1. Modulo Administracion.");
        printf("\n2. Modulo Recepcion.");
        printf("\n3. Modulo Consulta");
        printf("\n4. SALIR.");
        printf("\nIngrese una opcion: ");
        scanf("%d", &opc);
        
        switch(opc) {
            case 1:
                //if (loginAdmin()) {
                    system("C:\\Users\\VIRGINIA\\Desktop\\APUNTES\\final\\administracionFinal.exe");
                //} else {
                  //  printf("Error en el inicio de sesion del modulo de Administracion.\n");
                //}
                break;
            case 2:
                //if (loginRec()) {
                    system("C:\\Users\\VIRGINIA\\Desktop\\APUNTES\\final\\recepcionFinal.exe");
                //} else {
                  //  printf("Error en el inicio de sesion del modulo de Recepcion.\n");
                //}
                break;
            case 3:
                //if (loginGym()) {
                    system("C:\\Users\\VIRGINIA\\Desktop\\APUNTES\\final\\consultoriosFinal.exe");
                //} else {
                  //  printf("Error en el inicio de sesion del modulo de Consulta.\n");
                //}
                break;
            case 4:
                printf("Salir de la app\n");
                break;
            default:
                printf("Opción no válida. Por favor, seleccione una opción del 1 al 4.\n");
                break;
        }
    } while(opc != 4);
    
    return 0;
}

/*


bool loginAdmin() {
    FILE *arch;
    struct log user;
    bool login = false;
    char userName1[10], contra1[10];

    arch = fopen("login.dat", "rb");

    fread(&user, sizeof(struct log), 1, arch);
    while(!feof(arch)) {
        do {
            system("cls");
            printf("Ingrese el Usuario: ");
            fflush(stdin);
            gets(userName1);

            printf("Ingrese la Contraseña: ");
            fflush(stdin);
            gets(contra1);

            system("cls");

            if(strcmp(userName1, user.userName) != 0 || strcmp(contra1, user.contra) != 0) {
                printf("Usuario o Contraseña Incorrecto\n");
                login = false;
                system("pause");
            } else {
                printf("Inicio de Sesión Correcto\n");
                login = true;
                system("pause");
            }

            fread(&user, sizeof(struct log), 1, arch);
        } while(!login);
    }

    fclose(arch);

    return login;
}

bool loginRec() {
    FILE *arch;
    struct usuarios recepcionista;
    bool login = false;
    char userName1[10], contra1[10];

    arch = fopen("usuario.dat", "rb");

    if(arch == NULL) {
        printf("Primero debe crear usuario de recepcion.\n");
        system("pause");
        return login;
    }

    printf("Ingrese el Usuario: ");
    fflush(stdin);
    gets(userName1);

    printf("Ingrese la Contraseña: ");
    fflush(stdin);
    gets(contra1);

    rewind(arch);
    fread(&recepcionista, sizeof(struct usuarios), 1, arch);
    system("cls");

    while(!feof(arch)) {
        if(strcmp(userName1, recepcionista.usuario) != 0 || strcmp(contra1, recepcionista.contrasena) != 0) {
            login = false;
        } else {
            login = true;
            break;
        }

        fread(&recepcionista, sizeof(struct usuarios), 1, arch);
    }

    if(login) {
        printf("Inicio de Sesión Correcto\n");
        system("pause");
    } else {
        printf("Usuario o Contraseña Incorrecto\n");
        system("pause");
        system("...\\menu.exe");
    }

    fclose(arch);

    return login;
}

bool loginGym() {
    FILE *arch;
    struct profesional entrenador;
    bool login = false;
    int legajo1;
    char contra1[10];

    system("cls");

    arch = fopen("entrenadores.dat", "rb");

    if(arch == NULL) {
        printf("Primero debe crear usuario entrenador.\n");
        system("pause");
        return login;
    }

    printf("Ingrese el Legajo: ");
    scanf("%d", &legajo1);

    printf("Ingrese la Contraseña: ");
    fflush(stdin);
    gets(contra1);

    system("cls");
    rewind(arch);
    fread(&entrenador, sizeof(struct profesional), 1, arch);

    while(!feof(arch)) {
        printf("Legajo: %d\n", entrenador.legajo);
        printf("Contraseña: %s\n", entrenador.contrasena);

        if(legajo1 != entrenador.legajo || strcmp(contra1, entrenador.contrasena) == 0)
            login = true;

        fread(&entrenador, sizeof(struct profesional), 1, arch);
    }

    fclose(arch);

    if(login) {
        printf("Inicio de Sesión Correcto\n");
        system("pause");
    } else {
        printf("Usuario o Contraseña Incorrecto\n");
        system("pause");
        system("...\\menu.exe");
    }

    return login;
} */