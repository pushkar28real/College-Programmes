// Write a Programme to print a table according to user entered value...

#include <stdio.h>
#include <conio.h>

void main()
{
    int i, number;
    printf("Enter the Table: ");
    scanf("%d", &number);

    for(i = 1; i <= 10; i++)
    {
        printf("\n%d x %d = %d", number,i, number*i);
    }
    
}