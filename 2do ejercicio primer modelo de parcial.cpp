#include <stdio.h>
#include <conio.h>
#include <string.h>

/*
	Una compañia que posee N camiones almacena la siguiente informacion:
		Patente
		Destino
		Valor de la carga en pesos
		
	Crear y cargar el archivo, en una funcion sin tipo 
	e indique la patente y destino del camion con mayor valor de carga
	
	Calcular a travez de una funcion con tipo el porcentaje de camiones 
	con valor de carga mayor a 50000
*/

struct registro
{
	char pat[10];
	char dest[30];
	float carga;
};

void carga(int n, FILE *arch, struct registro reg, int *contMay)
{
    //registro reg;
    for (int i = 0; i < n; i++)
    {
        printf("\nIngrese la patente: ");
        scanf("%s", &reg.pat);
        _flushall();
        printf("\nIngrese el destino: ");
        gets(reg.dest);
        printf("\nIngrese el monto de la carga en pesos: ");
        scanf("%f", &reg.carga);
		
        fwrite(&reg, sizeof(struct registro), 1, arch);
    }
    
    float mayor = 0.00;
    for (int j = 0; j < n; j++)
	{
		if(reg.carga > mayor)
		{
			mayor = reg.carga;
			printf("\nLa patente es: ");
			puts(reg.pat);
			_flushall();
			printf("\nEl destino es: ");
			puts(reg.dest);
		}
		
		if(reg.carga > 50000.0)
		{
			(*contMay)++;
		}
	}
}

float porcentaje(int n, int contMay)
{
	float p = ((float)contMay / (float)n) * 100.0;
	return p; 	
}

main()
{
	registro reg;
	FILE *arch;
	int contMay = 0;
	int n;
	printf("\nIngrese la cantidad de camiones: ");
	scanf("%d", &n);
	
	arch = fopen("camiones.dat", "w+b");
    if (arch == NULL)
    {
        printf("Error al abrir el archivo.");
        return 1;
    }

    carga(n, arch, reg, &contMay);

    fclose(arch);
	float por = porcentaje(n, contMay);
	printf("El porcentaje de camiones con carga mayor a 50000 es %0.2f", por);
	
}