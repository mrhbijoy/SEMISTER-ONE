#include <stdio.h>

int main()
{
    int i, count = 0, j;
    char c;
    for (j = 1; j <= 9; j++)
    {
        scanf("%c", c);
        if (c == '1' ||c == '0'|| c == '2' || c == '3' || c == '4' || c == '5' || c == '6' ||  c == 'O')
        {
            count++;
        }
    }
    count -= 9;
    if (count < 6)
    {
        printf("%d BALLS", count);
    }
    if (count == 6)
    {
        printf("1 OVER");
    }
    if (count > 6)
    {
        count = count - 6;
        printf("1 OVER %d BALLS", count);
    }
}