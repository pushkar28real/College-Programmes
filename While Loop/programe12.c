#include <stdio.h>

void main()
{
    int i = 1, number = 1, sum = 0, range;
    printf("Enter the Number: ");
    scanf("%d", &number);
    printf("Enter the range: ");
    scanf("%d", &range);
    while(i <= 10)
    {
        sum = sum+(number*i);
        i++;
    }
    printf("Total: %d", sum);
}