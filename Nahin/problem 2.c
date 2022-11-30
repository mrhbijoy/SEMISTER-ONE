
// C Program to Print First 10 Odd Natural Numbers
#include <stdio.h>
int main(){
    int i;

    printf("The first 10 odd natural numbers are: \n");
    for (i = 1; i <= 10; i++){
        printf("%d\n", i * 2 - 1);
    }
    return 0;
}
