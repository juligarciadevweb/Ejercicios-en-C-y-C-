/*
Ingresando el sueldo de un empleado y la antigüedad (cantidad de años de trabajo), calcular la
bonificación que recibe en el momento del Reparto de Utilidades de la Empresa, teniendo en
cuenta que el reparto está relacionado con la antigüedad, de acuerdo con:

Hasta 3 años 15%
Más de 3 años y hasta 15 años 45%
Más de 30 años 70%

*/
#include <stdio.h>

main()
{
  float s;
  int aj;
  printf("Ingrese el sueldo: ");
  scanf("%f", &s);
  printf("Ingrese la antiguedad en años: ");
  scanf("%d", &aj);
  
  float por1 = s * 0.15; //Hasta 3 años
  float por2 = s * 0.45; //3 -- 15 años
  float por3 = s * 0.70; //30 años

  if(aj < 3)
  {
    float desc1 = s - por1;
    printf("El sueldo es: %0.2f", por1);
  } else if (aj >= 3 && aj <= 15)
  {
    float desc2 = s - por2;
    printf("El sueldo es: %0.2f", desc2);
  } else {
    float desc3 = s - por3;
    printf("El sueldo es: %0.2f", desc3);
  }
  
  return 0;
}
