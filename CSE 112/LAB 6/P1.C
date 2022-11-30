#include<stdio.h>
int sum(int n ){
    int rem; 
    if(n==0)
        return 0;
    else
    {
        rem=n%10;
        return rem+sum(n/10);
    }
}
int main()
{
int n;
printf("Enter the number:");
scanf("%d",&n);
printf("Sum of digits of %d is %d",n,sum(n));
return 0;
}