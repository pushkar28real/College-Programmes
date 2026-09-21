// Programme for swap two varibles without using third variable...

#include <stdio.h>
#include <conio.h>

void main()
{
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Before swapping:\nFirst number: %d\nSecond number: %d\n", num1, num2);
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("After swapping:\nFirst number: %d\nSecond number: %d", num1, num2);
    getch();
}