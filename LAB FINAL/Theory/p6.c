/*
Write a C program to right-rotate an array.
*/
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int temp = a[n-1];
    for (int i = n-1; i > 0; i--)
    {
        a[i] = a[i-1];
    }
    a[0] = temp;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}