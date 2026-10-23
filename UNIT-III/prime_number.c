#include <stdio.h>

void main()
{
    int num, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    if( num <= 1)
    {
        printf("%d is not a prime number\n", num);
        return;
    }
    for (  i = 2; i <= num; i++)
    {
        if(num % i == 0)
        {
            printf("%d is not prime number\n", num);
            break; // Exit the loop immediately...
        }
    }
    if ( i == num)
    {
        printf("\n%d is a Prime Number", num);
    }
}