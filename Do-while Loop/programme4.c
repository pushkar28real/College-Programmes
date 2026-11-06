#include <stdio.h>

void main()
{
    int i = 1, number, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    do 
    {
        sum += i;
        i++;
    }
    while(i <= number);
    printf("Sum of Number from 1 to %d: %d", number, sum);
}