#include<stdio.h>
int main()
{
int a,b,*p1,*p2;
scanf("%d%d",&a,&b);
p1=&a;
p2=&b;
printf("%d",*p1+*p2);
return 0;
}
