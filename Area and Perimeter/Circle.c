// Program to find area and parameter of Circle...

#include <stdio.h>
#include <conio.h>

void main()
{
    int radius;
    float area, parameter;

    printf("Enter the radius of Circle: ");
    scanf("%d", &radius);
    area = 3.14 * radius * radius;
    parameter = 2 * 3.14 * radius;
    printf("Area of Circle is: %.2f\n", area);
    printf("Parameter of Circle is: %.2f", parameter);
}