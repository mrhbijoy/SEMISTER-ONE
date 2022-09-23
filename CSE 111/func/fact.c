#include<stdio.h>
float ctf(float x){
   x = x + 270;
    return x;
}
int main(){
    printf("is %f", ctf(50));
}
