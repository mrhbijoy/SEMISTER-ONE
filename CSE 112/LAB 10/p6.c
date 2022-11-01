#include<stdio.h>
int main(){
  const int  a = 10;
    int *p = &a;
    *p = 20;
    printf("%d", a);
    return 0;
}