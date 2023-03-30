/*

Utiliza una función SIN TIPO para calcular el área de un triángulo:

*/
void area_triangulo(float base2, float altura2) {
   float area2 = (base2 * altura2) / 2;
   printf("El area del triangulo es: %.2f", area2);
}

int main() {
   float base2, altura2;
   printf("Ingrese la base del triangulo: ");
   scanf("%f", &base2);
   printf("Ingrese la altura del triangulo: ");
   scanf("%f", &altura2);
   area_triangulo(base2, altura2);
   return 0;
}
