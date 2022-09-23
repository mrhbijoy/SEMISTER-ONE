// /Write a program to print all odd numbers from 1 to n using for loop, while loop and do-while loop.
#include <stdio.h>
int main()
{
int n;
printf("Enter the value of n: ");
scanf("%d", &n);
printf("Odd numbers from 1 to %d are: ", n);
for(int i=1; i<=n; i++)
{
if(i%2!=0)
{
printf("%d ", i);
}
}
}