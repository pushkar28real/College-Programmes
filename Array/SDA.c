// Single dimesnsional array implementation

#include <stdio.h>

void main()
{
    int rolln[5],i;

    for(i = 0; i < 5; i++)
    {
        printf("Enter the Roll Number: ");
        scanf("%d",&rolln[i]);
    }
    for(i = 0; i <5; i++)
    {
        printf("Roll Number is: %d\n", rolln[i]);
    }
}