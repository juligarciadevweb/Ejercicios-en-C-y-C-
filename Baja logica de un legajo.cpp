#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>

/*
	Realizar la baja logica
*/

struct registro
{
	char name[40];
	int comision;
	int legajo;
	bool borrado;	
};

main()
{
	registro reg; 
	FILE *arch; //variable de acceso al archivo	
	bool band; //tenemos un booleano de confirmacion del borrado
	int leg; //declaracion de la variable legajo

	printf("Ingrese el legajo a dar de baja: ");
	scanf("%d", &leg);
	
	arch = fopen("chicas.dat", "r+b");
	
	//Hago una lectura del archivo
	fread(&reg,sizeof(registro), 1, arch);		
	band = false;
	
	//Mientras se cumplan ambas condiciones
	while(!feof(arch) == 0 && band == false)
	{
		if(reg.legajo == leg && reg.borrado == false)
		{
			reg.borrado = true; //Se hace una reasignacion del valor de borrado 
			//en base a que la condicion con compuerta and se cumplio
			fseek(arch, - sizeof(registro), SEEK_CUR);
			fwrite(&reg, sizeof(registro), 1, arch);
			printf("Registro dado de baja: ");
			band = true;		
		}else
			fread(&reg, sizeof(registro), 1, arch);
	}
	
	rewind(arch); //se utiliza para volver al principio
	
	fread(&reg, sizeof(registro),1, arch);
	
	while(!feof(arch))
	{
		if(reg.borrado = false)
		{
			printf("\nLegajo: %d\n", reg.legajo);
			printf("\nApellido y nombre: %s", reg.name);
			printf("\nComision: %0.2f", reg.comision);
		}
		fread(&reg, sizeof(struct registro), 1, arch);
	}  
	fclose(arch);
}