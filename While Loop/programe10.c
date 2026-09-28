#include <stdio.h>

void main()
{
    int i = 1, number, sum = 0;
    printf("Enter the Number: ");
    scanf("%d", &number);
    while(i <= number)
    {
        sum += i;
        i += 2;
    }
    printf("Sum: %d", sum);
}