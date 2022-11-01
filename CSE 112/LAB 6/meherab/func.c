#include<stdio.h>
    void oe(int n){
        int a = n % 2;
        if(a==0){
            printf("You have entered %d, which is a even number\n", n);
        }
        else if (a>0)
        {
             printf("You have entered %d, which is a odd number\n", n); 
        }
       @testnetwork
    }

int main(){
    int n,a;
    scanf("%d", &n);
    for (int i = 0; i < n;i++){
        scanf("%d", &a);
        oe(a);
    }
}




