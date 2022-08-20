#include <stdio.h>

int main()
{
    float pH;

    printf("Enter a number: ");
    scanf("%f", &pH);

    if (pH < 7.0)
        printf("Liquid is Acidic");

    else if(pH==7)
        printf("Liquid is Nutral ");

    else if(pH<=14)
        printf("Liquid is Alkaline ");
    else printf("Unknown Type");


    return 0;
}