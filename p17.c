// Write  a Programme to find out greatest number betweeen two integer...

#include <stdio.h>
#include <conio.h>

void main()
{
    int num1, num2;

    printf("Enter First Number: ");
    scanf("%d", &num1);
    printf("Enter Second Number: ");
    scanf("%d", &num2);

    if(num1>num2)
    {
        printf("First Number is Greatest");
    }
    else
    {
        printf("Second Number is Greatest");
    }
    getch();
}