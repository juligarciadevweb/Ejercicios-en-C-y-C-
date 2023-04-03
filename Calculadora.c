int multiplicacion(int a, int b) { 
    int mult = a * b; 
    return mult; 
}

int resta(int a, int b) { 
    int rest = a - b; 
    return rest; 
} 

int suma(int a, int b) { 
    int sum = a + b; 
    return sum; 
} 

float division(int a, int b) { 
    float div = a / b; 
    return div; 
}                


int main(){
    int C;
    int a, b;
    printf("Bienvenido a la calculadora de JuliDev");
        printf("\nEn el siguiente menu se muestran las opciones");
        printf("\n1)_ Multiplicacion");    
        printf("\n2)_ Division");
        printf("\n3)_ Suma");
        printf("\n4)_ Resta");
        printf("\nInserte el numero: ");
        scanf("%d", &C);
        
        switch (C)
        {
        case 1: 
            printf("Eligio multiplicacion");
            printf("\nIngrese el primer valor: ");
            scanf("%d", &a); //Leemos el dato
            printf("\nIngrese el segundo valor: ");
            scanf("%d", &b);
            int multi = multiplicacion(a, b); //utilizamos los datos ingresados
            printf("%d", multi);
        break;
        
        case 2: 
            printf("Eligio division");
            printf("\nIngrese el primer valor: ");
            scanf("%d", &a);
            printf("\nIngrese el segundo valor: ");
            scanf("%d", &b);
            float div = division(a, b);
            printf("%f", div);
        break;

        case 3: 
            printf("Eligio suma");
            printf("\nIngrese el primer valor: ");
            scanf("%d", &a);
            printf("\nIngrese el segundo valor: ");
            scanf("%d", &b);
            int sum = suma(a, b);
            printf("%d", sum); 
        break;
        
        case 4: 
            printf("Eligio resta");
            printf("\nIngrese el primer valor: ");
            scanf("%d", &a);
            printf("\nIngrese el segundo valor: ");
            scanf("%d", &b); 
            int res = resta(a, b);
            printf("%d", res); 
        break;

        default:
            printf("Opcion invalidada");
            break;
        }
    return 0;
}
