#include <stdio.h>
int main()
{
    int h, m;
    float angle;
    scanf("%d %d", &h, &m);
    angle = (h*30) - (m*5.5);
    if (angle < 0)
        angle = -angle;
    if (angle > 180)
        angle = 360 - angle;
    printf("%.7f", angle);
    return 0;
}
