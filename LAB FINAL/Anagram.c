/*
An anagram is a word formed by rearranging the letters of another word.

The words "listen" and "silent" has the same letters in them appearing the same number of times. This makes these two words anagram to each other.

Given two words, you need to determine if they are anagrams of each other
Input	
listen
silent
Output
Yes
*/
#include<stdio.h>
#include<string.h>
int main(){
    char a[100], b[100];
    gets(a);
    gets(b);
    int n = strlen(a);
    int m = strlen(b);
    if(n!=m){
        printf("No");
        return 0;
    }
    int count[26] = {0};
    for (int i = 0; i < n; i++)
    {
        count[a[i]-97]++;
    }
    for (int i = 0; i < m; i++)
    {
        count[b[i]-97]--;
    }
    for (int i = 0; i < 26; i++)
    {
        if(count[i]!=0){
            printf("No");
            return 0;
        }
    }
    printf("Yes");
    return 0;
}