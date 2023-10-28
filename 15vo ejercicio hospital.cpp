#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*

Crea un programa en C que permita cargar los datos de N voluntarios en un hospital 
para la investigación de patologías respiratorias en época invernal. 
Cada voluntario debe tener los siguientes campos:

EDAD
SEXO (M = Masculino, F = Femenino)
PATOLOGÍA (0 = Gripe Estacional, 1 = Gripe A, 2 = Neumonía, 3 = Bronquitis, 4 = fibrosis pulmonar)

Luego, tu programa debe ser capaz de realizar lo siguiente:

a. Calcular y mostrar la cantidad de personas de sexo femenino mayores a 58 años 
que padecen Bronquitis o Gripe A.

b. Calcular y mostrar la cantidad de personas de sexo masculino 
que padecen Gripe Estacional o fibrosis pulmonar .

*/

struct Patologias
{
	char pat[30];
	int previas;
};


struct Datos
{
	char nameYapp[30];
	int edad;
	char direccion[30];
	Patologias patol;		
	char sexo[10];
};

main()
{
	struct Datos vol[30];
	int n;
	int contA = 0;
	int contB = 0;
	printf("Ingrese la cantidad de pacientes: ");
	scanf("%d", &n);
	for(int i; i < n; i++)
	{
		printf("\nIngrese el nombre y apellido del paciente: ");
		gets(vol[i].nameYapp);
		_flushall();
		printf("\nIngrese la edad: ");
		scanf("%d", &vol[i].edad);
		_flushall();
		printf("\nDireccion: ");
		gets(vol[i].direccion);
		_flushall();
		printf("\nPatologias: ");
		gets(vol[i].patol.pat);
		strupr(vol[i].patol.pat);
		_flushall();
		printf("\nSexo(F para femenino y M para masculino): ");
		gets(vol[i].sexo);
		strupr(vol[i].sexo);
		_flushall();
		printf("\nPosee patologias previas(1 para SI y 0 para NO): ");
		scanf("%d", &vol[i].patol.pat);
		
		if (vol[i].sexo[0] == 'F' && vol[i].edad >= 58 && (strcmp(vol[i].patol.pat, "BRONQUITIS") == 0 || strcmp(vol[i].patol.pat, "GRIPE A") == 0)) 
		    contA++;
		
		
		if(vol[i].sexo[0] == 'M' && (strcmp(vol[i].patol.pat, "GRIPE ESTACIONAL") == 0 || strcmp(vol[i].patol.pat, "FIBROSIS PULMONAR")))
			contB++;		
	}
	printf("\nLas personas de sexo femenino mayores a 58 anios que padecen Bronquitis o Gripe A son: %d", contA);
	printf("\nLa cantidad de personas de sexo masculino que padecen Gripe Estacional o fibrosis pulmonar: %d", contB);	
}







