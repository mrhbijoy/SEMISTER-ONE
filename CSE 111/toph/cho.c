#include<stdio.h>
int main(){
    int n, i,t,l,r,sum1=0;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &t);
    
    for (i = 0; i < t; i++)
    {
        sum1 = 0;
        scanf("%d", &l);
        scanf("%d", &r);

        for (int j = l; j <= r; j++)
        {
            sum1 = sum1 + a[j-1];
               
            }
        printf("%d\n", sum1);
        
            
    }
    
}


