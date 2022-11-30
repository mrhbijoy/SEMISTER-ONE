// C Program To Convert Decimal To Binary
#include <stdio.h>
#include <math.h>
long convert(int n){
    int rem, temp = 1;
    long binary = 0;

    while (n != 0){
        rem = n %2;
        n = n / 2;
        binary = binary + rem * temp;
        temp = temp * 10;
    }
    return binary;
}
int main(){
    int num;

    printf("Enter a decimal number: ");
    scanf("%d", &num);
    printf("%d in Decimal = %d in Binary", num, convert(num));
    return 0;
}
