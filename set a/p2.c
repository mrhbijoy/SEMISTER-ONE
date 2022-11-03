#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i, j;
    printf("Enter a string: ");
    gets(str);
    for (i = 0; str[i] != '\0'; ++i)
    {
        while (!(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == '\0'))
        {
            printf("%c", str[i]);
            ++i;
        }
    }
    return 0;
}