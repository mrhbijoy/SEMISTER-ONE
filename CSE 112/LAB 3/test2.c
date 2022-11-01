#include <stdio.h>
int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    if (c >= 'A' && c <= 'Z')
        printf("%c", c + 32);
    else
        printf("%c", c);
    return 0;
}