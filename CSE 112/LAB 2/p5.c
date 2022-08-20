#include <stdio.h>

int main()
{
    char ch;
    
    /* Reads character input from the user */
    printf("Enter any character: ");
    scanf("%c", &ch);
    
    /* Condition for vowel */
    if((ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') || 
       (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'))
    {
        printf("%c is vowel.", ch);
    }
    else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("%c is consonant.", ch);
    }
    else 
    {
        /* If the input is not alphabet */
        printf("%c is not an alphabet.", ch);
    }

    return 0;
}