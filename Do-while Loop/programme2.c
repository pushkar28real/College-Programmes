// Write a Programme to print even numbers from 1 to 50

#include <stdio.h>

void main()
{
    int i = 2;
    do
    {
        printf("\n%d", i);
        i += 2;
    }
    while(i <= 50);
}