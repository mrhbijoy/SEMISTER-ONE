#include<stdio.h>
int rec(int n){
    if(n==0)
        return 0;
    else
        return (n%10)+rec(n/10);
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("The reverse of %d is %d",n,rec(n));
    return 0;
}