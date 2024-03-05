#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main()
{
	system("color 70");
	printf("                    BIENVENIDO PROFESOR CANTO                 ");
	int opc = 0;
	
	do{
		printf("\nA que modulo desea ingresar?: ");
		printf("\n1. Modulo Administracion.");
		printf("\n2. Modulo Recepcion.");
		printf("\n3. Modulo Consulta");
		printf("\n4. SALIR.");
        printf("Ingrese una opcion: ");
        scanf("%d", &opc);
		
		switch(opc)
		{	
			case 1:
				system("administracionFinal.exe"); 
				break;
			case 2:
				system("recepcionFinal.exe");
				break;
			case 3:
				system("consultoriosFinal.exe");
				break;
			case 4:
				printf("Cerrar la aplicacion");				
				break;	
		}
	}while(opc != 4);		
}