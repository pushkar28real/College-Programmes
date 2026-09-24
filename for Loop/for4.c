//Write a Programme to print sum of 1 to 10

#include <stdio.h>
#include <conio.h>

void main()
{
    int i, total = 0;

    for( i = 1; i <= 10; i++)
    {
        total += i;
        printf("\n%d", i);
    }
    printf("\nTotal: %d", total);
}