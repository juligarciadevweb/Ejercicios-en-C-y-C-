/*

Una planta que fabrica perfiles de hierro posee un lote de n piezas.
Confeccionar un programa que pida ingresar por teclado la cantidad de piezas a procesar 
y luego ingrese la longitud de cada perfil; sabiendo que la pieza cuya longitud esté comprendida en el rango de 1.20 y 1.30 son aptas. 
Imprimir por pantalla la cantidad de piezas aptas que hay en el lote.

*/


int main() {
    int piezas, aptas = 0; 
    float longitud;
    int x = 1; 
    printf("Ingrese la cantidad de piezas a procesar: ");
    scanf("%d", &piezas);
    
    while (x <= piezas) {
        printf("Ingrese la longitud: ");
        scanf("%f", &longitud);
        // longitud esté comprendida en el rango de 1.20 y 1.30 son aptas
        if (longitud >= 1.20 && longitud <= 1.30) { 
            aptas = aptas + 1;
        }
      
        x = x + 1; //Solo cuenta la cantidad de piezas aptas
    
    }
    printf("La cantidad de piezas aptas son: %d", aptas);
    return 0;
}
