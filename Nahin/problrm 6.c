// C Program To Calculate Average Using Arrays
#include <stdio.h>
int main(){
    int i, n;
    float num[25], sum = 0.0, average;

    printf("Enter total no. of elements: ");
    scanf("%d", &n);

    while (n > 25 || n < 1){
        printf("Please enter number in the range of 1 to 25");
        scanf("%d", &n);
    }
    for (i = 0; i < n; ++i){
        printf("%d. Enter a number: ", i + 1);
        scanf("%f", &num[i]);
        sum = sum + num[i];
    }
    average = sum / n;
    printf("Average: %.2f", average);
    return 0;
}
