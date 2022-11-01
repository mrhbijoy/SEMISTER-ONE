#include <stdio.h>
int lcm(int a, int b, int i)
{
    if (i % a == 0 && i % b == 0)
    {
        return i;
    }
    else
    {
        return lcm(a, b, i + 1);
           }
}int main()
{
    int a, b;
    printf("Enter the two numbers: ");
    scanf("%d %d", &a, &b);
    printf("The LCM of %d and %d is %d", a, b, lcm(a, b, 1));
    return 0;
}