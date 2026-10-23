#include <stdio.h>

void main()
{
    int sum = 0, i, remainder, num, original;
    printf("Enter a Number: ");
    scanf("%d", &num);
    original = num;
    while( num > 0 )
    {
        remainder = num % 10;
        num = num/10;
        sum = sum + (remainder*remainder*remainder);
    }
    if(original == sum)
    {
        printf("\nArmstrong Number");
    }
    else
    {
        printf("\nNot an Armstrong Number");
    }
}