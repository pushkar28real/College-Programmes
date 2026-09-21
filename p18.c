// Write a Programme a larger number among three integer value 

#include <stdio.h>
#include <conio.h>

void main()
{
    int num1, num2, num3;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter Second number: ");
    scanf("%d", &num2);
    printf("Enter Third number: ");
    scanf("%d", &num3);

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("%d is the largest number.", num1);
        }
        else
        {
            printf("%d is the largest number.", num3);
        }
    }
    else
    {
        if (num2 > num3)
        {
            printf("%d is the largest number.", num2);
        }
        else
        {
            printf("%d is the largest number.", num3);
        }
    }

    getch();
}
