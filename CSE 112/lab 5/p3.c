#include<stdio.h>

int power(int x){
    x = x * x;
    return x;
}
int sum(int n){
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + i;
    }
    return sum;
}
int main(){
    int a;
    scanf("%d", &a);
    printf("%d\n", power(a));
    printf("%d\n", sum(a));
}
