// C Program To Reverse a String
#include <stdio.h>
#include <string.h>
int main(){
    char s[60];
    int i, count;

    printf("Enter a string: ");
    scanf("%s", s);

    count = strlen(s);

    for (i = count; i >= 0; i--){
        printf("%c", s[i]);
    }
    return 0;
}
