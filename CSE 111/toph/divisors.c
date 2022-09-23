#include<stdio.h>
int main(){
    int n;
    scanf("%d" ,&n);
    for (int a = 0; a < n; a++)
    {
        int d = n / (n-a);

        if(n%d==0){
            printf("%d\n",d);
        }
    }
}