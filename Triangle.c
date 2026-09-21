// Programme to find area and parameter of triangle...

#include <stdio.h>
#include <conio.h>

void main()
{
    int l, b, h;
    float area, parameter;

    printf("Enter the Length of Triangle: ");
    scanf("%d", &l);
    printf("Enter the Breadth of Triangle: ");
    scanf("%d", &b);
    printf("Enter the Height of Triangle: ");
    scanf("%d", &h);
    area = 0.5 * b * h;
    parameter = l + b + h;
    printf("Area of Triangle is: %.2f\n", area);
    printf("Parameter of Triangle is: %.2f", parameter);
}

