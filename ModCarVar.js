                                          //Caracteres de modificacion

int main(){
    //Definis cada variable con su estructura clasica
    // type + name + value ;
    int edad = 25;
    int edad2 = 45;
    printf("La primera edad es: %d \n - La segunda edad es: %d", edad,edad2);
    //Escribis el mensaje, luego el tipo de variable y finalmente los nombres de las mismas
    

    return 0;
}

                                        //Declaracion de constantes y variables

  //Constantes ==> #define + name + valor
#define PI 3.14;
#define AJ 5;
#define DA 9.55;

  //Variables ==> type + name + value
float nj = 5.36;
int hj = 6;

  //Uso de valores flotantes y asignacion

int main(){
    float sueldo = 55.100;
    float bono = 6000;
    sueldo += bono; 
    //Le estoy diciendo a sueldo que tome el valor de bono, obviamente sumado al mismo
    printf("El valor del sueldo es: %f ", sueldo);
}
