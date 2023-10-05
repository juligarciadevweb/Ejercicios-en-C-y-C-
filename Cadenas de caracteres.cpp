#include <stdio.h>
#include <string.h>
#include <stdlib.h>

main()
{
	char nombre[50]; //Declaro la cadena con la longitud maxima
	//El & es para invocar el contenido de la variable y no la direccion donde esta el contenido
	
	//Obtener la cadena
	printf("Ingrese el nombre ");
	gets(nombre);
	
	//Mostrar
	printf("El nombre es ");	
	puts(nombre);
	
	//Obtencion de la longitud
	printf("La longitud es %d", strlen(nombre));
	
	//Uso de strcpy
	char nombre[] = "Dante O.Diambra";
	char copia[80];
	strcpy(copia, nombre);
	printf("La variable <copia> tiene el valor: %s", copia);
	
	//STRCAT
	//Sirve para concantenar 2 cadenas
	char n_c[50]; //Definimos el tamaño maximo de la variable nombre completo
	char nombre1[] = "Juan";
	char nombre2[] = "Garcia";	
	
	strcpy(n_c, nombre1); //Como n_c esta vacio le copio el valor de la primera cadena de caracteres 
	strcat(n_c, " "); //Le concateno un espacio en blanco para que quede mas formal
	strcat(n_c, nombre2); //Le concatenamos el apellido definido como nombre2
	puts(n_c); //Mostramos la cadena completa 
	
	//STRCMP
	char apel1[30], apel2[30];
	int valor; //Almacenara el valor de la comparacion
	
	//Pedido y lectura de cadenas
	printf("\nIngrese el apellido 1: "); //Ponemos un mensaje para la especificacion
	gets(apel1); //Hacemos la lectura con una instruccion propia de la libreria
	printf("\nIngrese el apellido 2: ");
	gets(apel2);
	
	valor = strcmp(apel1, apel2); //Siempre se comparara la primera cadena con la segunda
	/*
	Realiza una comparacion del codigo ASCII, por ejemplo una letra mayuscula tiene menos 
	ASCII que la minuscula
	*/
	
	if(valor == 0)
		printf("Las cadenas son iguales");
		if(valor < 0)
			printf("La primera cadena es mayor");
			if(valor > 0)
				printf("La segunda cadena es mayor");
	
					//STRLWR = convierte a minusculas
	//Es una abreviatura para "string lowercase" (cadena en minúsculas)
	char nombre = "San Miguel de tucuman";
	strlwr(nombre);
	puts(nombre);
	
				//STRUPR = convierte a mayusculas
	//Es una abreviatura para "string uppercase" (cadena en minúsculas)
	char nombre[] = "San Miguel de tucuman";
	strupr(nombre);
	puts(nombre);
	
				//STRSTR = buscar subcadena en la cadena x1 
	//Posee 2 parametros aplicados en la formula(id primera cadena, "cadena a buscar") - cad original
	char CAD[] = "Este es un ejemplo";
	int pos;
	pos = strstr(CAD, "ejemplo")-CAD;	
	if(pos >= 0)
		printf("'ejemplo' esta en %s, su primer ocurrencia es en la posicion %d", CAD, pos);
	else
		printf("La cadena 'ejemplo' no esta en la inform")
}

 