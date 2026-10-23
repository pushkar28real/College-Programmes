#include <stdio.h>

void main()
{
    int num, i, fact = 1;
    printf("Enter a Number: ");
    scanf("%d", &num);
    for( i = 1; i <= num; i++)
    {
        fact *= i;
    }
    printf("\nFactorial of %d are: %d", num, fact);
}