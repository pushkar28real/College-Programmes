#include <stdio.h>

void main()
{
    int i = 1, number;
    printf("Enter the table: ");
    scanf("%d", &number);
    while(i <= 10)
    {
        printf("%d x %d = %d\n", number, i, number*i);
        i++;
    }
}