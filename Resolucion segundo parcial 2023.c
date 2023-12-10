#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

/* 
Una compañia que posee N camiones de transporte almacena la siguiente 
informacion en un archivo binario
 
 Patente
 Destino
 Valor en pesos de la carga
 
 Crear y cargar e indicar la patente y el 
 destino del camion con mayor cantidad de carga
 
 Calcular el porcentaje de camiones cuyo valor de carga supera los 50.000
*/

struct registro
{
    int patente;
    char destino[30];
    float value;
};

void carga(FILE *arch, struct registro reg, int n, int *cont)
{
    float maxCarga = 0;
    int patenteMax = 0;
    char destinoMax[30];

    for (int i = 0; i < n; i++)
    {
    	//Realizamos la carga
        _flushall();
        printf("\nIngrese el destino: ");
        gets(reg.destino);
        _flushall();
        printf("\nIngrese la patente: ");
        scanf("%d", &reg.patente);
        printf("\nIngrese el valor en pesos de la carga: ");
        scanf("%f", &reg.value);

        if (reg.value > 50000.00)
        	{
            	(*cont)++;
        	}

        fseek(arch, 0, SEEK_END); // devuelvo el puntero al final
        fwrite(&reg, sizeof(registro), 1, arch);

        if (reg.value > maxCarga)
        {
            maxCarga = reg.value;
            patenteMax = reg.patente;
            strcpy(destinoMax, reg.destino);
        }
    }

    printf("\nCamion con mayor cantidad de carga:\n");
    printf("\nPatente: %d\n", patenteMax);
    printf("\nDestino: %s\n", destinoMax);
}

float porcentaje(int n, int cont)
{
	float por = ((float)cont / n) * 100;
	return por;
}

int main()
{
    registro reg;
    FILE *arch;
    int n;
    int cont = 0;

    printf("Ingrese la cantidad de camiones que va a cargar: ");
    scanf("%d", &n);

    arch = fopen("camYdes.dat", "w+b");
    if (arch == NULL)
    {
        printf("Error al abrir el archivo.");
        return 1;
    }

    carga(arch, reg, n, &cont);
    fclose(arch);

	//float x = porcentaje(n, cont);
    printf("\nCantidad de camiones con carga mayor a 50000.00: %d\n", cont);
	printf("\nEl porcentaje de camiones con carga mayor a 50000.00 es: %0.2f", porcentaje(n, cont));
    return 0;
}
