/*
2. Write a C program to check whether a number is a palindrome or not. A
palindrome number is such a number that when reversed is equal to the
original number. example: 6, 121, 2992, etc.
*/
#include<stdio.h>
int main(){
    int n;
    scanf("%d" ,&n);
    int temp = n;
    int rev = 0;
    while(temp>0){
        int last = temp % 10;
        rev = rev * 10 + last;
        temp = temp / 10;
    }
    if(rev == n){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}