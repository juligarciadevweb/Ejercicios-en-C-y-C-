/*
    Confeccionar un programa que obtenga 3 numeros positivos y muestre cual es el mayor
*/

int main(){
    int num1, num2, num3;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Enter the third number: ");
    scanf("%d", &num3);

    if (num1 > num2 && num1 > num3)
    {
        printf("The first number is the older");
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf("The second number is the older");
    }
    else
    {
        printf("The third number is the older");
    }
    return 0;
    
}
