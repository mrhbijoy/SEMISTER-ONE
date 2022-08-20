#include <stdio.h>

int main()
{
    int num1;
    float num2;
    char name[20];

    printf("Enter a Number: ");
    scanf("%d", &num1);

    printf("Enter a decimal number: ");
    scanf("%f", &num2);

    printf("Enter your name: ");
    scanf("%s", name);

    printf("The Number is : %d\n", num1);
    printf("The Decimal Number is : %f\n", num2);
    printf("Your name  is : %s \n", name);
    return 0;
}