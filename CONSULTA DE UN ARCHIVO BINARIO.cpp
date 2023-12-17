#include <stdio.h>
#include <conio.h>
#include <string.h>

struct registro
{
	int legajo, edad;
	char apynom[30];
	float sueldo;
	bool borrado;	
};

main()
{
	registro reg;
	FILE *arch;
	/* Listado */
	arch = fopen("empleados.dat", "r+b"); //Con la instruccion r+b el archivo debe existir previamente
	fread(&reg,sizeof(registro), 1, arch); //hacemos la lectura del archivo basandonos en el while !feof
	
	while(!feof(arch)) //mostrara los datos mientras no se termine el archivo
	{
		if(reg.edad > 25) //Mostrara los empleados mayores de 25 años de edad
		{
			printf("\nLegajo: %d", reg.legajo); //Usamos 
			printf("\nApellido y nombre: %s", reg.apynom);
			printf("\nSueldo: %.2f", reg.sueldo);
			printf("\nEdad: %d", reg.edad);
		} 
		fread(&reg, sizeof(registro), 1, arch);
	}
	fclose(arch);
	getch();
}