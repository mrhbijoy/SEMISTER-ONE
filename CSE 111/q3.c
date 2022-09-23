#include <stdio.h>
int main(){
    int a; long long int x ; float y; double z;
    printf("Enter an integer: ");
    scanf("%d", &a);
    printf("Enter a long long integer: ");
    scanf("%lld", &x);
    printf("Enter a float: ");
    scanf("%f", &y);
    printf("Enter a double: ");
    scanf("%lf", &z);
    printf("The integer is %d", a);
    printf("The long long integer is %lld", x);
    printf("The float is %f", y);
    printf("The double is %lf", z);
    return 0;
}