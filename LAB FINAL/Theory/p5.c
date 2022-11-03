/*
Write a C program to find LCM of two numbers using recursive function.
*/
#include<stdio.h>
int lcm(int a, int b){
    static int m = 0;
    m += b;
    if(m%a==0 && m%b==0){
        return m;
    }
    else{
        return lcm(a,b);
    }
}
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", lcm(a,b));
    return 0;
}


