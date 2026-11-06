#include <stdio.h>

void main()
{
    int i = 1, number, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &number);

    do
    {
        fact *= i;
        i++;
    }
    while (i <= number);
    printf("Factorial of %d is: %d", number, fact);
}