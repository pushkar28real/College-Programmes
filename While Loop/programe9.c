#include <stdio.h>

void main()
{
    int i = 1, number;
    printf("Enter your Number: ");
    scanf("%d", &number);
    while(i <= number)
    {
        printf("\n%d", i);
        i += 2;
    }
}