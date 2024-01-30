#include <stdio.h>
#include <stdlib.h>

/*Se declara al vector v como una variable de tipo puntero*/

main()
{
	int *v,n,i; //declaramos v como puntero
	printf("Ingrese el valor de n: ");
	scanf("%d",&n);

	//crea el arreglo de n elementos en forma dinámica
	v=new int[n]; //usamos el mismo concepto aprendido anteriormente
	
	for (i=0;i<n;i++)
	{
		printf("Ingrese el elemento de posicion %d: ",i);
		scanf("%d",&v[i]);
	}
	
	/*devuelve la memoria usada*/
	delete v;
}