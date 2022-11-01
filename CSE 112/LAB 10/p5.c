#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n;i++){
        scanf("%d", &a[i]);
    }
    int test = 0;
    for (int i = 0; i < n/2;i++){
        if(a[i]!=a[n-i-1]){
            test = 1;
            break;
        }
    }
    if(test==0){
        printf("palindrome");
    }
    else{
        printf("not palindrome");
    }
    return 0;
}