/* 
En un video club se administra los datos de los N socios: 
Edad, 
Deporte que realiza (1=Futbol,2= Natación, 3 = jockey) 
y Sexo (1 = Masculinos, 2 = Femeninos).

Se desea saber:
  a) Cuantos socios entre la edad de 30 y 50 años practican futbol.
  b) Cuantos socios femeninos tiene el club y cuantos masculinos.
  c) Cuantos socios son menores de 16 años
*/


int main()
{
    //Contadores de los incisos
    int contFem = 0;    //socias femeninas 
    int contMasc = 0;   //socios masculinos
    int contEdmen = 0;  //Menores de 16 años
    int contEdfut = 0; //Entre la edad de 30 y 50 años practican futbol
    int x = 0; //variable pibote
    int socios;
    
    printf("Cuantos socios va a ingresar? "); //tenemos aqui el N socios
    scanf("%d", &socios);
        while (x < socios)
        {
            int edad;
            printf("Ingrese la edad: ");
            scanf("%d", &edad);
            int deporte;
            printf("Ingrese el deporte: 1 para futbol, 2 para natacion y 3 para jokey ");
            scanf("%d", &deporte);
            int sexo;
            printf("Ingrese el sexo: 1 para masculino y 2 para femenino ");
            scanf("%d", &sexo);
            if (deporte == 1 && edad >= 30 && edad <= 50) //utilizamos una doble compuerta logica
            {
                contEdfut++;
            }
        
            if (sexo == 1)
            {
                contMasc++;
            }else
            {
                contFem++;
            }

            if (edad < 16)
            {
                contEdmen++;
            }

            x++;
        }
        
        //Muestra de los resultados 
        printf("La cantidad de socias femeninas son: %d\n",contFem);
        printf("\nLa cantidad de socios masculinos son: %d",contMasc);
        printf("\nLos socios que tienen entre 30 y 50 años y practican futbol son: %d", contEdfut);
        printf("\nLos socios menores de 16 años son: %d", contEdmen);

    return 0;
}





