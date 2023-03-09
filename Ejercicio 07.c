/*
    Escribir un programa que te diga si una letra es vocal o consonante
*/

int main(){
    char letra;
    printf("Ingrese una letra: ");
    scanf("%c", &letra);

    switch (letra)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("Es una vocal");
        break;
    
    default: //En caso de que no se cumplan ninguno de los casos anteriores
        printf("No es una vocal");
        break;
    }
    return 0;
}
