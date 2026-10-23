#include <stdio.h>

void main()
{
    int num1, num2, sum1 = 0, sum2 = 0;
    printf("Enter two number: ");
    scanf("%d %d", &num1, &num2);
    for(int i = 1; i <= num1/2; i++)
    {
        if(num1%i == 0)
        {
            sum1 += i;
        }
    }
    for(int i = 1; i <= num2/2; i++)
    {
        if(num2%i == 0)
        {
            sum2 += i;
        }
    }
    if(num1 != num2 && sum1 == num2 && sum2 == num1)
    {
        printf("%d and %d are Amicable Number", num1, num2);
    }
    else
    {
        printf("\n%d and %d are not Amicable Number", num1, num2);
    }

}