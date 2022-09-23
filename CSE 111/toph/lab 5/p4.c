#include<stdio.h>
float area(float x, float y){
    float a = x * y;
    return a;
}
float perimeter(float x, float y){
    float p = 2 * (x + y);
    return p;
}
int main(){
    float a, b;
    printf("Enter the values of height & wide:");
    scanf("%f %f", &a, &b);
    printf("Area : %f", area(a, b));
    printf(" Perimeter : %f", perimeter(a, b));
}