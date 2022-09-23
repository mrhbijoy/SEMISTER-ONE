//write a c program to find the square of a number using function
#include<stdio.h>
            int sqr(int y) {
                return y*y;
            }
int main()
{
    
    int x;
    printf("Enter a number:\n ");
    scanf("%d", &x);
    printf("%d\n", sqr(x));
}