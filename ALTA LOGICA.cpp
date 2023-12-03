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
	registro reg; //Variable de acceso al registro
	FILE *arch; //creacion de la variable de acceso al archivo
	int n; //Cantidad de empleados que ingresar el usuario 
	int i;
	printf("Ingrese la cantidad de empleados: ");
	scanf("%d", &n);
	
	arch = fopen("empleados.dat", "w+b"); //el w+b en caso de no existir un archivo lo crea y le pone el nombre dado
	for(i = 0; i < n; i++)
	{
		printf("\n\nIngrese los datos del registro: ");
		printf("\nLegajo: ");
		scanf("%d", &reg.legajo); //Ya dentro del archivo accedo al legajo
		_flushall(); //usamos la funcion interna _flushall() para limpiar el buffer
		printf("\nIngrese el nombre y apellido: ");
		gets(reg.apynom);
		printf("\nIngrese el sueldo: ");
		scanf("%f", &reg.sueldo);
		printf("\nIngrese la edad: ");
		scanf("%d", &reg.edad);
		reg.borrado = false;	
		fwrite(&reg,sizeof(registro), 1, arch); //damos de alta creando el archivo
	}
	fclose(arch);
}