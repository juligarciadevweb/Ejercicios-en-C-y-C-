#include <stdio.h>
#include <stdlib.h>

//Se usa sólo la variable de tipo puntero.

main()
{
	int *p; //declaramos el puntero con su tipo de dato correspondiente
	p=new int; //va a ser un nuevo valor entero
	
	*p=20; //le asignamos un valor x
	
	printf("La direccion obtenida en p es: %x",p);
	printf("\n\nEl valor almacenado es: %d\n",*p);
	
	delete p; //borramos el puntero
	getchar();
}