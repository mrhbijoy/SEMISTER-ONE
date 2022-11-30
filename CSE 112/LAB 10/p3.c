#include<stdio.h>
void fact(int *a){
    int f = 1;
    for (int i = 1; i <= *a;i++){
        f = f * i;
    }
    *a = f;
}
int main(){
    int a;
    scanf("%d", &a);
    fact(&a);
    printf("%d", a);
    return 0;
}