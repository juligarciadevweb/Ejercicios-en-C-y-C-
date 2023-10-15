#include <stdio.h>
#include <string.h>

/*

1)  En un negocio que se dedica a la venta de insumos eléctricos tiene la información 
de sus clientes en la siguiente estructura.

struct datosCliente
{
	int codCli; //código del cliente
	char ApeNom[40]; //apellido y nombre
	char dire[60]; //domicilio particular
	float monCred; //Monto máximo del crédito que puede realizar en cada compra.
};


 Ingresar el dato N clientes.
 A medida que se van ingresando los clientes, 
	usando una función mostrar los datosregistrados.
 Al finalizar la carga de los N clientes, 
	mostrar cuantos clientes tienen un monto de crédito superior a $ 30.000.

*/

struct datosCliente
{
	int codCli;
	char ApeNom[40];
	char dire[60];
	float monCred;
};

void mostrar(struct datosCliente dat)
{
	printf("\nLos datos ingresados son: \n\n");
	printf("\nCodigo: %d", dat.codCli);
	printf("\nNombre y apellido: ");
	puts(dat.ApeNom);
	printf("\nLa direccion es: ");
	puts(dat.dire);
	printf("\nEl monto es: %f", dat.monCred);
}

main()
{
	datosCliente dat;
	int n; //Defino el numero de clientes
	int may = 0; //Personas con credito mayor
	printf("Bienvenido al sistema de ventas");
	printf("\nIngrese el numero de clientes a cargar: ");
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++)
	{
		printf("\n");
		printf("\n\nIngrese el codigo de cliente: ");
		scanf("%d", &dat.codCli);
		
		_flushall();
		printf("\nIngrese el apellido y nombre del cliente: ");
		gets(dat.ApeNom);
		
		printf("\nIngrese la direccion del cliente: ");
		gets(dat.dire);
		
		printf("\nIngrese el monto: ");
		scanf("%f", &dat.monCred);
		
		mostrar(dat);
		if(dat.monCred > 30000)
			may++;		
	}
	
	printf("\n");
	printf("\nLas personas con creditos mayores a 30.000 son %d", may);
}

