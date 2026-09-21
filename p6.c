// Programme to find area and perimeter of square...

#include <stdio.h>
#include <conio.h>

void main()
{
    int side;
    int area, parameter;

    printf("Enter the Side of Square: ");
    scanf("%d", &side);
    area = side * side;
    parameter = 4 * side;
    printf("Area of Square is: %d\n", area);
    printf("Parameter of Square is: %d", parameter);
}