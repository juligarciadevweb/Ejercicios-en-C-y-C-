/*          
Ingresar N terna de valores enteros positivos,
correspondientes a datos de una fecha (Día, Mes, Año), determine la validez de las mismas y
mediante un mensaje informar si los datos ingresados son “Fecha Validas” o “Fechas Invalidas”. El
ingreso de fechas termina cuando se ingresa el año 0.

*/
#include <stdio.h>

main()
{
  int x = 0; //Usaremos la x para contar la cantidad de fechas ingresadas
  int mes, año, dia;
  int contInv = 0; //Contador de fechas invalidas
  int contVal = 0; //Contador de fechas validas
  int n;
  
  do{
      printf("Ingrese el dia: ");
      scanf("%d", &dia);
      printf("Ingrese el mes: ");
      scanf("%d", &mes);
      printf("Ingrese el año: ");
      scanf("%d", &año);
      if(dia <= 31 && mes <= 12 && año <= 2023 && año != 0)
      {
          contVal++;
      } else {
        contInv++;
      } 
      x++;
    } while(año != 0);
    printf("La cantidad de fechas ingresadas es: %d", x);
    printf("\nLa cantidad de fechas validas es: %d", contVal);
    printf("\nLa cantidad de fechas invalidas es: %d", contInv);
  
  return 0;
}
