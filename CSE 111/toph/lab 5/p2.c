#include<stdio.h>
int func(int x,int y){
    int h;
    h = (x * x) + (y * y * y);
    return h;
}
int main() {
    int a, b;
    printf("Enter the values of x & y:");
    scanf("%d %d", &a, &b);
    printf("The result is: %d", func(a, b));
}