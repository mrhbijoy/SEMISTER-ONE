/*
Write a C program to convert a string to lowercase.
*/
#include<stdio.h>
int main(){
    char a[100];
    gets(a);
    for (int i = 0; a[i] != '\0'; i++)
    {
        if(a[i]>=65 && a[i]<=90){
            a[i] += 32;
        }
    }
    printf("%s", a);
    return 0;
}
