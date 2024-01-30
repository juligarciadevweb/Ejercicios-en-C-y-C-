#include <stdio.h>
#include <stdlib.h>

struct registro
{
	int codigo;
	float precio;
};

main()
{
	registro a,*p; //declaramos la variable de acceso al registro y el puntero
	
	//en forma estática
	a.codigo=2;
	a.precio=2.2;
	printf("Codigo: %d\n",a.codigo);
	printf("Precio: %.2f\n",a.precio);
	
	//en forma dinámica modificando directamente la direccion de memoria
	p=&a;
	p->codigo=4;
	p->precio=4.4;
	printf("Codigo: %d\n",p->codigo);
	printf("Precio: %.2f\n",p->precio);
}