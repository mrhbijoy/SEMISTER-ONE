#include<stdio.h>
int main(){
    int a[100], b[100], s[100], n,sum=0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    
    {
        scanf("%d", &a[i]);
        sum=sum+a[i];
        
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
        sum=sum+b[i];
    }
    printf("sum of two arrey %d", sum);



    
}