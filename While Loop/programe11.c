#include <stdio.h>

void main()
{
    int i = 1, number, fact = 1;
    printf("Enter the Number: ");
    scanf("%d", &number);
    while (i <= number)
    {
        fact *= i;
        i++;
    }
    printf("Factorial: %d", fact);
}