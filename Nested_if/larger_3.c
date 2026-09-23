#include <stdio.h>
#include <conio.h>

void main()
{
    int num1, num2, num3;

    printf("Enter the value of num1 & num2 & num3: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if(num1 > num2)
    {
        if(num1 > num3)
        {
            printf("First Number is Greatest");
        }
        else 
        {
            printf("Third Number is Greatest");
        }
    }
    else 
    {
        if(num2 > num3)
        {
            printf("Second Number is Greatest");
        }
        else 
        {
            printf("Third Number is Greatest");
        }
    }
}