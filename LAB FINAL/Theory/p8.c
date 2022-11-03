/*
Write a C program to count the frequency of each character in a string.
*/
#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    gets(a);
    int n = strlen(a);
    int count[26] = {0};
    for (int i = 0; i < n; i++)
    {
        count[a[i]-97]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if(count[i]!=0){
            printf("%c is %d times\n", i+97, count[i]);
        }
    }
    return 0;
}
