// Write a Programme to check given number is positive or negative...

#include <stdio.h>
#include <conio.h>

void main()
{
    int number; 

    printf("Enter your Number: ");
    scanf("%d", &number);

    if(number >= 0)
    {
        printf("Number is Positive");
    }
    else
    {
        printf("Number is Negative");
    }
    getch();
}