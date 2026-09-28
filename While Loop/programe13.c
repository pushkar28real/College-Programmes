#include <stdio.h>

void main()
{
    int i = 1, number, even = 0, odd = 0;
    printf("Enter the Number:  ");
    scanf("%d", &number);
    while(i <= number)
    {
        if(i % 2 == 0)
        {
            even += 1;
        }
        else
        {
            odd += 1;
        }
        i++;
    }
    printf("Even Count: %d\nOdd Count: %d", even, odd);
}