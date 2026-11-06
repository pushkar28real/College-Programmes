#include <stdio.h>

void main()
{
    int i = 1, even = 0, odd = 0, number;
    printf("Enter a number: ");
    scanf("%d", &number);

    do
    {
        if( i % 2 == 0)
        {
            even += 1;
        }
        else
        {
            odd += 1;
        }
        i++;
    }
    while(i <= number);
    printf("Even Count: %d\nOdd Count: %d", even, odd);
}