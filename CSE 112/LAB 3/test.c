#include<stdio.h>
int main(){
    int i = 0;
    char name[] = "test";
    while (name[i])
    {
        i++;
    }
    printf("%d", i);
    
}