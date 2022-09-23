#include<stdio.h>

int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int fibnm1 = fib(n - 1);
    int fibnm2 = fib(n - 2);
    int fib = fibnm2 + fibnm1;
    return fib;
}
int main() {
    int a;
    scanf("%d", &a);
    printf("%d", fib(a));
}