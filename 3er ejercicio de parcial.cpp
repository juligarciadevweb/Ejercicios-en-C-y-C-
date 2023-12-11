#include <stdio.h>
#include <string.h>
#include <conio.h>

/*

Crear una matriz para una tienda de ropa con filas representando diferentes prendas y columnas 
representando diferentes tallas.

Se solicita:

	Cargar y mostrar la prenda más vendida en todas las tallas.

	Crear una función que determine la cantidad promedio de ventas para 
	una talla específica de una prenda. 
	
	Mostrar la cantidad promedio de ventas para esa talla en particular.

*/

//filas == prendas
//columnas == tallas
void cargaMat(int fil, int col, int mat[30][30])
{
	for(int i = 0; i < fil; i++)
	{
		printf("\nPrenda: %d", i + 1);
		for(int j = 0; j < col; j++)
		{
			printf("\nIngrese la talla de la prenda: ", j + 1);
			scanf("%d", &mat[i][j]);
		}
	}
	
	int num = 0;
    int ac = mat[0][0]; //usar
    for (int i = 0; i < fil; i++) 
	{
        int acum = 0; // Declarar acumulador dentro del bucle
        for (int j = 0; j < col; j++) 
		{
            acum += mat[i][j];
            //acumulo todos los valores de las prendas en el acumulador y eso se va sumando
        }

        if (acum > ac) 
		{
            ac = acum; //le reasigno el valor acumulado
            num = i + 1; //por las dudas el i este en el anterior indice
        }
    }
    printf("La prenda con mayor venta es: %d\n", num);
}

float Prom(int in, int mat[30][30], int fil, int col) 
{
    int totalVen = 0;

    for (int j = 0; j < fil; j++) 
	{
        totalVen += mat[in][j];
    }

    float prom = (float)totalVen/fil;

    printf("La venta promedio del talle %d es: %.2f\n", in + 1, prom);

    return prom;
}
main()
{
	int fil, col;
	int mat[30][30];
	int in;
	printf("\nIngrese la cantidad de prendas: ");
	scanf("%d", &fil);
	printf("\nIngrese la cantidad de tallas: ");
	scanf("%d", &col);
	cargaMat(fil, col, mat);
	
	printf("\nIngrese la talla (1-%d) para determinar la venta promedio: ", col);
	scanf("%d", &in);
	if (in >= 1 && in <= col)    
	{
   		Prom(in, mat, fil, col); 
   	} else {
       	printf("Índice de electrodomestico no válido.\n");
   	}
	
	
}