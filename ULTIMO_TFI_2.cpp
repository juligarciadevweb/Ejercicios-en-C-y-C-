#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() 
{
    printf("                    BIENVENIDO PROFESOR                 ");
    int opc = 0;
    
    do {
        printf("\nA que modulo desea ingresar?: ");
        printf("\n1. Modulo Administracion.");
        printf("\n2. Modulo Recepcion.");
        printf("\n3. Modulo Consulta");
        printf("\n4. SALIR.");
        printf("\nIngrese una opcion: ");
        scanf("%d", &opc);
        
        switch(opc) {
            case 1:
               
                    system("C:\\Users\\win10\\Documents\\Codigos\\administracionFinal.exe");
               
                
            
                break;
            case 2:
                
                    system("C:\\Users\\win10\\Documents\\Codigos\\recepcionFinal.exe");
    
                break;
            case 3:
                
                    system("C:\\Users\\win10\\Documents\\Codigos\\consultoriosFinal.exe");
                break;
            case 4:
                printf("Salir de la app\n");
                break;
            default:
                printf("Opción no válida. Por favor, seleccione una opción del 1 al 4.\n");
                break;
        }
    } while(opc != 4);
    
    return 0;
}

