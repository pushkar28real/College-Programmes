#include <stdio.h>

int square(int num)
{
    
    return num * num;
}

void main()
{
    int num;
    printf("Enter a Number: ");
    scanf("%d", &num);
    int result = square(num);
    printf("Square of the Number is: %d\n", result);
}