
#include <stdio.h>
int main()
{
    int i = 5, sum = 0;
    do
    {
        sum += i;
        i += 4;
    } while (i < 99);
    printf("The sum is %d", sum);
    return 0;
}
