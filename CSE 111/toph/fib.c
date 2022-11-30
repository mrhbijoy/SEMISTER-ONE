#include<stdio.h>

int fib(int n){
    if(n==0 || n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    int fibnm1 = fib(n - 1);
    int fibnm2 = fib(n - 2);
    int fib = fibnm2 + fibnm1;
    return fib;
}
//fibonacci series using loop
int fibo(int n){
    int a = 0;
    int b = 1;
    int c;
    if(n==0){
        return a;
    }
    if(n==1){
        return b;
    }
    for(int i = 2; i <= n; i++){
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}
int main() {
    int a;
    scanf("%d", &a);
    printf("%d", fib(a));
}