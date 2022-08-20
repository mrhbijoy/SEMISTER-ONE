#include <stdio.h>

int main(void)
{
    float C, F;
    printf("Enter the Celsius value: ");
    scanf("%f", &C);
    
    F = (C * 9 / 5) + 32;
    
    printf("The Fahrenheit value is: %.1f", F);
    
    return 0;
}