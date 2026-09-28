#include <stdio.h>

void main()
{
    int i = 1, sum = 0, number;
    printf("Enter the Number: ");
    scanf("%d", &number);
    while(i<= number)
    {
        sum += i;
        i++;
    }
    printf("Sum: %d", sum);
}