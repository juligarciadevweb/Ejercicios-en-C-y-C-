/*

Escribir un programa que solicite la carga de números por teclado, obtener su promedio. 
Finalizar la carga de valores cuando se ingrese el valor 0.
Cuando la finalización depende de algún valor ingresado por el operador conviene el empleo de la estructura do while, por lo menos se cargará un valor 
(en el caso más extremo se carga 0, que indica la finalización de la carga de valores)

*/

int main(){
    int x, valor, cont;
    int suma, promedio;
    do
    {
        printf("Ingrese un valor, 0 para finalizar: ");
        scanf("%d", &valor);
        if (valor != 0)
        {
            suma += valor;
            cont++; 
        }
        
    } while (valor != 0);
    if (cont > 0)
    {
        promedio = suma/cont;
        printf("El promedio es; %d", promedio);
    } else{
        printf("Cifra invalida");;
    }
    
    return 0;
}
