/*
   Dados 2 valores enteros A y B, 
   se pide ingresarlos y mostrar la suma de los mismos
*/



main() {
   //Definimos las variables, siempre va primero el tipo de dato
  //Inicializamos las variables en 0
  
   int a = 0;
   int b = 0;
   int suma = 0;
   
   printf("Dame el primer valor de A: ");
   //Imprimimos un mensaje para que el usuario ingrese el valor
   scanf("%d", &a);
   //Leemos el valor para guardarlo en la variable
   printf("Dame el primer valor de B: ");
   scanf("%d", &b);
   
   suma = a + b; //Realizamos la suma
   
   printf("El valor de la suma es: %d", suma);

}
