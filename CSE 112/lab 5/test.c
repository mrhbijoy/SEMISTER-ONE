#include<stdio.h>

int sum(int a,int b){
    int c=a; 
    if(a==b){
        return c;
    }
    else{
        c++;
        
        sum(c, b);

    }
}

int main(){

    printf("%d", sum(1, 10));
}