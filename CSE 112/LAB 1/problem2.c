#include <stdio.h>

int main()
{
    float radius, circumference, area, diameter;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    diameter = 2 * radius;
    circumference = 2 * 3.14159 * radius;
    area = 3.14159 * radius * radius;

    printf("The circle's diameter is: %f\n", diameter);
    printf("The circle's circumference is: %f\n", circumference);
    printf("The circle's area is: %f\n", area);

    return 0;
}