// C Program To Find the Sum of Natural Numbers Using Recursion
#include <stdio.h>
int Sum(int n);
int main(){
    int num;


    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Sum of %d Natural Numbers is %d.", num, Sum(num));
    return 0;
}
int Sum(int n){
    if (n != 0)
        return n + Sum(n - 1);
    else
        return 0;
}
