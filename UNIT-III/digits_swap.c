// Extracting digit from a number (left to right) and (right to left)

#include <stdio.h>

void main()
{
    int num, digit;
    printf("Enter a Number: ");
    scanf("%d", &num);
    while (num > 0)
    {
        digit = num % 10;
        printf("%d", digit);
        num = num / 10;
    }
}