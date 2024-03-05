#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>

struct usuarios{
	
	char usuario[10],contrasena[10],apeynom[100];
	
};

struct loginAdmin
{	
	char userName[10],contra[10];	
};

struct profesionalMedico 
{
    char apeynom[60];
    char contrasena[10];
    int matricula;
    char especialidad[30];
    int horaInicio;
    int horaFin;
};

void registrarUsuarioRecepcionista(usuarios recepcionista,int &cantUser);
int validarUsuario(char usuario[11], usuarios recepcionista, int cantUser);
int validarContrasena(char contrasena[11]);
void registrarProfesionalMedico(); 
void registrarAtenciones();
void rankingdeProfesionales();

main()
{
	system("color 70");
	int opcion = 0, cantRec=0;
	
	usuarios recepcionista;
	
	do{
		printf("                 MODULO ADMINISTRACION                 ");
		printf("\n1.--- Registrar profesionales ---");
		printf("\n2.--- Registrar usuario recepcionista ---");
		printf("\n3.--- Atencion por profesional ---");
		printf("\n4.--- Ranking de profesionales por atenciones ---");
		printf("\n6.--- Volver al menu");
		scanf("%d", &opcion);
		
		switch(opcion)
		{	
			case 1:
				registrarProfesionalMedico(); 
				break;
			case 2:
				registrarUsuarioRecepcionista(recepcionista,cantRec);
				break;
			case 3:
				registrarAtenciones(); 
				break;
			case 4:
				rankingdeProfesionales(); //ranking de profesionales
				break;
			case 5:
				system("ULTIMO TFI.exe");
				break;
			}
	}while(opcion != 6);
}


void registrarUsuarioRecepcionista(usuarios recepcionista,int &cantRec)
{
	int i = cantRec, valido;
	
	FILE *arch; 
	arch = fopen("usuario.dat","a+b"); //apertura del archivo
	
	printf("Ingrese Apellido y Nombre: ");
	_flushall();
	gets(recepcionista.apeynom);
	
	do
	{
		printf("Ingrese nombre de usuario: ");
		_flushall();
		gets(recepcionista.usuario);
		valido = validarUsuario(recepcionista.usuario,recepcionista,cantRec);
	}while(valido != 0);
	
	valido = false;
	
	do{
		printf("Ingrese contraseña de usuario: ");
		_flushall();
		gets(recepcionista.contrasena);
		valido = validarContrasena(recepcionista.contrasena);
	}while(valido != 0);
	
	fwrite(&recepcionista,sizeof(usuarios),1,arch);
	
	fclose(arch);
	
	system("cls");
	printf("Usuario registrado correctamente");
	system("pause");
	cantRec++;
}

int validarUsuario(char usuario[11], usuarios recepcionista, int cantRec)
{
	int res = 0, n,i,mayus = 0, digit = 0;
	bool unico = true;
	n = strlen(usuario);
	if(n < 6)
	{
		res = 1;
		printf("\nERROR: El nombre de Usuario debe tener minimo 6 caracteres,Ingrese nuevamente por favor.");
	}
	
	if(n > 10)
	{
		res = 1;
		printf("\nERROR: El nombre de Usuario debe tener maximo 10 caracteres,Ingrese nuevamente por favor.");
	}
	
	for(i = 0 ; i < cantRec; i++)
	{
		if(strcmp(usuario,recepcionista.usuario) == 0)
		{
			unico = false;
		}
	}
	
	if(!unico)
	{
		res = 1;
		printf("\nERROR: El Nombre de Usuario se encuentra Repetido,Ingrese nuevamente por favor.");
	}
	
	if(usuario[0] == 'A' || usuario[0] == 'B' || usuario[0] == 'C' || usuario[0] == 'D' || usuario[0] == 'E' || usuario[0] == 'F' || 
	   usuario[0] == 'G' || usuario[0] == 'H' || usuario[0] == 'I' || usuario[0] == 'J' || usuario[0] == 'K' || usuario[0] == 'L' || 
	   usuario[0] == 'M' || usuario[0] == 'N' || usuario[0] == 'O' || usuario[0] == 'P' || usuario[0] == 'Q' || 
	   usuario[0] == 'R' || usuario[0] == 'S' || usuario[0] == 'T' || usuario[0] == 'U' || usuario[0] == 'V' || usuario[0] == 'W' || 
	   usuario[0] == 'X' || usuario[0] == 'Y' || usuario[0] == 'Z')
	   {
	   	res = 1;
	}else{
		printf("\nERROR: La primera letra del nombre de usuario debe ser minuscula,Ingrese nuevamente por favor.");
	}
	
	for(i = 0;i < n;i++)
	{
		if(usuario[i] == 'A' || usuario[i] == 'B' || usuario[i] == 'C' || usuario[i] == 'D' || usuario[i] == 'E' || usuario[i] == 'F' || 
		   usuario[i] == 'G' || usuario[i] == 'H' || usuario[i] == 'I' || usuario[i] == 'J' || usuario[i] == 'K' || usuario[i] == 'L' || 
		   usuario[i] == 'M' || usuario[i] == 'N' || usuario[i] == 'O' || usuario[i] == 'P' || usuario[i] == 'Q' || 
		   usuario[i] == 'R' || usuario[i] == 'S' || usuario[i] == 'T' || usuario[i] == 'U' || usuario[i] == 'V' || usuario[i] == 'W' || 
		   usuario[i] == 'X' || usuario[i] == 'Y' || usuario[i] == 'Z'){
		   	mayus++;
		}
		if(usuario[i] == '0' || usuario[i] == '1' || usuario[i] == '2' || usuario[i] == '3' || usuario[i] == '4' || usuario[i] == '5' || 
		   usuario[i] == '6' || usuario[i] == '7' || usuario[i] == '8' || usuario[i] == '9'){
		   	digit++;
		}
	}
	
	if(mayus < 2)
	{
		res = 1;
		printf("\nERROR: El nombre de Usuario Debe contener mas de 2 mayusculas,Ingrese nuevamente por favor.");
	}
	
	if(digit > 3)
	{
		res = 1;
		printf("\nERROR: El nombre de Usuario No puede contener mas de 3 digitos,Ingrese nuevamente por favor.");
	}
	
	return res;
}

int validarContrasena(char* password) {
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

void registrarProfesionalMedico() 
{
    FILE *arch;
    struct profesionalMedico medico;
    char apeynom[60], contrasena[10];
    bool valid = false;
    int matricula;

    arch = fopen("medicos.dat", "rb"); //apertura del archivo binario

    printf("Matricula: ");
    scanf("%d", &matricula);

    if (arch != NULL) 
	{
        while (fread(&medico, sizeof(struct profesionalMedico), 1, arch) == 1) 
		{
            if (medico.matricula == matricula) 
			{
                printf("Matricula ya existe");
                fclose(arch);
                system("pause");
                return;
            }
        }
        fclose(arch);
    }

    printf("Nombre y Apellido: ");
    fflush(stdin);
    gets(apeynom);

    printf("Contrasena: ");
    fflush(stdin);
    gets(contrasena);

    printf("Especialidad: ");
    fflush(stdin);
    gets(medico.especialidad);

    system("cls");

    arch = fopen("medicos.dat", "ab");

    if (strlen(contrasena) > 3) 
	{
        strcpy(medico.apeynom, apeynom);
        medico.matricula = matricula;
        strcpy(medico.contrasena, contrasena);
        //escritura del archivo
		fwrite(&medico, sizeof(struct profesionalMedico), 1, arch);
        //cierre del archivo
		fclose(arch); //cierre de la escritura del archivo
        printf("Medico registrado correctamente");
        valid = true; //ante un registro correcto se cambia el valor
    } else 
	{
        printf("Ingrese una contrasena con mas de 3 caracteres.");
	}
    
    system("pause");
}

void registrarAtenciones() 
{
    FILE *arch;
    struct profesionalMedico medico;

    int matriculaMedico, horaInicio, horaFin;
    char especialidadAux[30];
    bool matriculaExistente = false, horarioOcupado = false;

    arch = fopen("medicos.dat", "rb");

    system("cls");

    if (arch == NULL) {
        printf("Primero debe registrar médicos.");
        system("pause");
        return;
    }

    printf("Matrícula del médico que atenderá: ");
    scanf("%d", &matriculaMedico);

    rewind(arch); //Coloca el cursor en el principio del archivo

    while (fread(&medico, sizeof(struct profesionalMedico), 1, arch)) 
	{
        if (matriculaMedico == medico.matricula) 
		{
            matriculaExistente = true;
            break;
        }
    }

    fclose(arch);

    if (!matriculaExistente) 
	{
        printf("Matricula inexistente.\n");
        _flushall();
        return;
    }

    arch = fopen("medicos.dat", "rb");

    printf("Especialidad de la atención: ");
    fflush(stdin);
    gets(especialidadAux);

    printf("Horario de inicio de la atención: ");
    scanf("%d", &horaInicio);

    printf("Horario de finalización de la atención: ");
    scanf("%d", &horaFin);

    rewind(arch);

    while (fread(&medico, sizeof(struct profesionalMedico), 1, arch)) 
	{
        if (medico.matricula == matriculaMedico) 
		{
            if (medico.horaInicio > horaInicio && medico.horaFin < horaFin || 
                medico.horaFin > horaInicio && medico.horaInicio < horaFin ||
                medico.horaInicio == horaInicio || medico.horaInicio == horaInicio || 
                medico.horaFin == horaInicio || medico.horaFin == horaFin) {
                horarioOcupado = true;
                break;
            }
        }
    }

    fclose(arch);

    system("cls");

    if (!horarioOcupado) {
        arch = fopen("atenciones.dat", "ab");

        strcpy(medico.especialidad, especialidadAux);
        medico.matricula = matriculaMedico;
        medico.horaInicio = horaInicio;
        medico.horaFin = horaFin;
        
        fwrite(&medico, sizeof(struct profesionalMedico), 1, arch);
        
        fclose(arch);
        
        printf("Atención registrada correctamente.\n");
        system("pause");
    } else {
        printf("Horario ocupado.\n");
        system("pause");
    }
}

void rankingdeProfesionales()
{
    FILE *arch;
    struct profesionalMedico profesional;
    arch = fopen("profesionales.dat","rb");
    system("cls");
    if(arch == NULL)
    {   
        printf("Primero debe registrar profesionales");
        system("pause");
        return;    
    }
    int vMatricula[10], contProfesional = 0;
    fread(&profesional, sizeof(struct profesionalMedico), 1, arch);
    while(!feof(arch))
    {   
        vMatricula[contProfesional] = profesional.matricula;
        contProfesional++;   
        fread(&profesional, sizeof(struct profesionalMedico), 1, arch);    
    }
    fclose(arch);
    int vAux[contProfesional], vMatriculaFinal[contProfesional], cont, num, j = 0, tamanioV = 0;
    for (int i = 0; i < contProfesional; i++) 
    {
        cont = 0;
        num = vMatricula[i];
        vAux[j] = num;
        j++;
        for (int k = 0; k < 10; k++)
        {
            if (vAux[k] == num) 
            cont++;
        }
        if (cont == 1) 
        {
            vMatriculaFinal[tamanioV] = num;
            tamanioV++;
        }
    }
    
    int mayorCarga = 0, cargaTotal = 0, indice = 0, matricula = 0, cargaMatricula;
    for (int i = 0; i < tamanioV; i++)
    {   
        arch = fopen("profesionales.dat", "rb");
        cargaTotal = 0;
        fread(&profesional, sizeof(struct profesionalMedico), 1, arch);
        while(!feof(arch))
        {   
            if(profesional.matricula == vMatriculaFinal[i])
            {
                cargaTotal++;
            }
            fread(&profesional, sizeof(struct profesionalMedico), 1, arch);    
        }
        if(cargaTotal > mayorCarga)
        {   
            matricula = vMatriculaFinal[i];   
        }
        fclose(arch);    
    }
    system("cls");    
    arch = fopen("profesionales.dat", "rb");
    fread(&profesional, sizeof(struct profesionalMedico), 1, arch);
    while(!feof(arch))
    {
        if(profesional.matricula == matricula)
        {   
            printf("El profesional con mayor carga horaria es: ");
            printf("Nombre: %s\n", profesional.apeynom);
            printf("Matricula: %d\n", profesional.matricula);
            break;
        }
        fread(&profesional, sizeof(struct profesionalMedico), 1, arch);    
    }
    fclose(arch);
    system("pause");
}