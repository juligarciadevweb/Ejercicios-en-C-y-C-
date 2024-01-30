#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main()
{
	int a, *p;
	
	a=17; //aunque le cambiemos el valor siempre estara en la misma direccion
	p=&a; //accedemos a la direccion de memoria de A por medio del puntero "p"

	printf("El valor de a es: %d\n",a);
	printf("Esta en la Direccion: %x",p);
	
	*p=1000; //al modificar p modificamos el valor de A
	printf("\n\nNUEVO valor de a: %d\n",a);
	printf("Esta en la Direccion: %x",p);
	
	
}