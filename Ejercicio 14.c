//Hacer un contador con do while

int main(){
    int contador = 0; //Declaramos la variable contador

    do //Inicializamos el ciclo
    {
        contador++; //En la primera vuelta lo incrementa en 1 
    } while (contador < 10); //Realiza 10 vueltas  
    printf("contador = %d", contador);

    return 0;
}
