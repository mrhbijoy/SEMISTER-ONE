/*Your task is to take two numbers of int data type, two numbers of float data type as input and output their sum*/
#include<stdio.h>
int main()
{
    int a,b;
    float c,d;
    printf("enter the numbers:");
    scanf("%d %d %f %f",&a,&b,&c,&d);
    int sum = a+b;
    int diff = a-b;
    float fsum = c+d;
    float fdiff = c-d;
    printf("%d %d\n%0.1f %0.1f",sum,diff,fsum,fdiff);
    return 0;
}