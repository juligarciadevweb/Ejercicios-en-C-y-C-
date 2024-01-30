#include <stdio.h>
#include <conio.h>
#include <string.h>

/*
	Una empresa que posee N camiones almacena la siguiente informacion:
		Patente
		Destino
		Valor de la carga en pesos
		
	Crear y cargar el archivo, en una funcion sin tipo 
	e indique la patente y destino del camion con mayor valor de carga
	
	Calcular a travez de una funcion con tipo el porcentaje de camiones 
	con valor de carga mayor a 50000
*/

#define NOMBRE "camiones.dat"
struct registro
{
	char pat[10];
	char dest[30];
	float carga;
};

void carga(int n)
{
    registro reg;
	FILE* arch = fopen(NOMBRE, "a+b");
    for (int i = 0; i < n; i++)
    {
        printf("\nIngrese la patente: ");
        scanf("%s", &reg.pat);
        _flushall();
        printf("\nIngrese el destino: ");
        gets(reg.dest);
        printf("\nIngrese el monto de la carga en pesos: ");
        scanf("%f", &reg.carga);
		
        fwrite(&reg, sizeof(registro), 1, arch);
    }
    fclose(arch);

	registro camionMayor; // Declaración de una variable 
	//para almacenar la información del camión con la mayor carga
	arch = fopen(NOMBRE, "r+b"); 
	
    float mayor = 0.00; // Una variable para almacenar el mayor valor de carga
	fread(&reg, sizeof(registro), 1, arch); // Leer la información del primer camión desde el archivo
    
    //Encontrar el camión con la mayor carga
	while(!feof(arch))
	{
		//Si la carga del camión actual es mayor que el valor actual de "mayor"
		if(reg.carga > mayor)
		{
			// Actualizar el valor máximo de carga si se encuentra un camión con carga mayor
			mayor = reg.carga; // Asignar la carga del camión actual a la variable "mayor"
			camionMayor = reg; // Almacenar toda la información del camión actual en "camionMayor"
		}
		fread(&reg, sizeof(registro), 1, arch);
	}

	printf("El camion con mayor valor de carga es \n");
	printf("Patente: %s\nDestino: %s\n", camionMayor.pat, camionMayor.dest);
	fclose(arch);
	return;
}

float porcentaje(int n)
{
	float f_n = (float)n;
	float contMay = 0;
	registro reg;
	FILE* arch = fopen(NOMBRE, "r+b");
	fread(&reg, sizeof(registro), 1, arch);
    while(!feof(arch))
	{
		if(reg.carga > 50000)
		{
			contMay += reg.carga;
		}
		fread(&reg, sizeof(registro), 1, arch);
	}
	fclose(arch);
	return (contMay / f_n) * 100.0;
}

main()
{
	registro reg;
	FILE *arch;
	int n;
	printf("\nIngrese la cantidad de camiones: ");
	scanf("%d", &n);
	
	arch = fopen(NOMBRE, "w+b");
    if(arch == NULL)
    {
        printf("Error al abrir el archivo.");
        return 1;
    }
	fclose(arch);
    carga(n);

	printf("El porcentaje de camiones con carga mayor a 50000 es %.2f%%", porcentaje(n));
	
}