#include<stdio.h>

int main() {
    int a,count;
    char c;
    scanf("%d", &a);
   for(int i = 1; i < a ; i++) {
       scanf("%c", c);
        if (c == '1' ||c == '0'|| c == '2' || c == '3' || c == '4' || c == '5' || c == '6' ||  c == 'O')
        {
            count++;
        }
}
printf("%d", count);

}