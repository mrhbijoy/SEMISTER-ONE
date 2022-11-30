//factorial of a number using recursion
#include<stdio.h>
int fact(int n)
{
    if(n==0|| n==1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}
//factorial of a number using loop
int facto(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("The factorial of %d is %d", n, fact(n));
    return 0;
}