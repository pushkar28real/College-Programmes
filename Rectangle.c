// Programme to find area and parameter of rectangle...

#include <stdio.h>
#include <conio.h>

void main()
{
    int l, b;
    int area, parameter;

    printf("Enter the Length of Rectangle: ");
    scanf("%d", &l);
    printf("Enter the Breadth of Rectangle: ");
    scanf("%d", &b);
    area = l * b;
    parameter = 2 * (l + b);
    printf("Area of Rectangle is: %d\n", area);
    printf("Parameter of Rectangle is: %d", parameter);
    
}