#include<stdio.h>
int easy(int x){
    int y = x++;
    while(y%3!=0)
    {
        y = x;
        x++;
    }
    return x;
}
int main(){
    int x = 5;
    printf("%d", easy(x));
}
