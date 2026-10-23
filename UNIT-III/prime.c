#include <stdio.h>

void main()
{
    int num, i;
    printf("Enter a Number: ");
    scanf("%d", &num);
    printf("\nPrime factor of %d are: ", num);
    for( i = 2; num > 1;)
    {
        if( num % i == 0)
        {
            printf("%d,", i);
            num = num/i;
        }
        else
        {
            i++;
        }
    }
}