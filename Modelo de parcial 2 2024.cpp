#include <stdio.h>
#include <stdlib.h>

/*

Escribe un programa en C que solicite al usuario ingresar un vector 
de números enteros de tamaño N. Luego, el programa debe calcular 
y mostrar la suma de los elementos pares y la suma de los 
elementos impares por separado.

*/

main()
{
	int vec[50];
	int sumPar = 0;
	int sumImp = 0;
	int n;
	printf("Ingrese la cantidad de notas: ");
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++)
	{
		if(vec[i] >= 1 && vec[i] <= 10)
		{
			printf("Ingrese la nota %d: ", i);
			scanf("%d", &vec[i]);	
			if(vec[i] % 2 == 0)
				sumPar += vec[i];
			else
				sumImp += vec[i];
		}else{
			printf("ERROR, ingrese una nota entre 1 y 10: ");
			scanf("%d", &vec[i]);
		}
	}
	
	printf("\nLa suma de los pares es: %d", sumPar);
	printf("\nLa suma de los impares es: %d", sumImp);
}