/*
   Dados 2 valores enteros A y B, 
   se pide ingresarlos y mostrar:
   
   Suma
   Resta
   Multiplicacion
   Division
*/

main() {
   //Definimos las variables iniciales, siempre va primero el tipo de dato
   
   int a = 0;
   int b = 0;
   int suma = 0;
   int multiplicacion = 0;
   int resta = 0;
   float division = 0;
   
   //Le pedimos al usuario los valores
   printf("Dame el primer valor de A: ");
   scanf("%d", &a); //Leemos los valores
   printf("Dame el primer valor de B: ");
   scanf("%d", &b);
   
   //Tenemos las variables con sus respectivas operaciones
   suma = a + b; 
   resta = a - b;
   division = a/b;
   multiplicacion = a * b;
   
   if (b == 0) { //Usamos una verificacion para hacer la division
    printf("No es posible dividir entre cero\n");
   } else {
    division = (float)a / b;
    printf("La división de %d entre %d es %.2f\n", a, b, division);
   }
 
   //Imprimimos los resultados restantes
   printf("El valor de la suma es: %d", suma);
   printf("\n El valor de la resta es: %d", resta);
   printf("\n El valor de la multiplicacion es: %d", multiplicacion);

}
