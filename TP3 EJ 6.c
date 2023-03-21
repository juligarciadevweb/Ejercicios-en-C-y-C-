/*
Desarrolla un programa que recibiendo por teclado dos valores numéricos que representan el mes
y el día de una fecha determinar a qué estación del año corresponde.
*/

#include <stdio.h>

int main() {
  int mes, dia;
  
  printf("Ingrese el mes (1-12): ");
  scanf("%d", &mes);
  
  printf("Ingrese el dia (1-31): ");
  scanf("%d", &dia);
  
  if (mes == 1 || mes == 2 || (mes == 3 && dia <= 20) || (mes == 12 && dia >= 21)) {
    printf("Es verano.\n");
  } else if (mes == 4 || mes == 5 || (mes == 3 && dia >= 21) || (mes == 6 && dia <= 20)) {
    printf("Es otoño.\n");
  } else if (mes == 7 || mes == 8 || (mes == 6 && dia >= 21) || (mes == 9 && dia <= 20)) {
    printf("Es invierno.\n");
  } else if (mes == 10 || mes == 11 || (mes == 9 && dia >= 21) || (mes == 12 && dia <= 20)) {
    printf("Es primavera.\n");
  } else {
    printf("Fecha ingresada no válida.\n");
  }
  
  return 0;
}
