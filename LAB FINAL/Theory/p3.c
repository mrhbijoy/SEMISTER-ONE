#include<stdio.h>
int prime(int n){
    int i;
    for ( i = 2; i < n; i++)
    {
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int prime2(int n){
    int i = 2;
    while(i<n){
        if(n%i==0){
            return 0;
        }
        i++;
    }
    return 1;
}


int main(){
    int n;
    scanf("%d" ,&n);
    if(prime(n)){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}