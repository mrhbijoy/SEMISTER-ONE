
// C Program To Count Number of Digits in an Integer
#include <stdio.h>
int main(){
    int i;


    printf("Enter an Integer: ");
    scanf("%d", &i);


    int n = 0;

    while (i > 0){
        n++;
        i /= 10;
    }
    printf("Total Number of Digits are: %d", n);
    return 0;
}
