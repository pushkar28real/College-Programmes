/// Double dimensional Array 

#include <stdio.h>

void main()
{
    float marks [5][3];
    int i,j;

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j <3; j++)
        {
            printf("Enter the marks of student %d in subject %d: ", i + 1, j + 1);
            scanf("%f", &marks[i][j]);
        }
    }

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("Marks of student %d in subject %d is: %.2f\n", i + 1, j + 1, marks[i][j]);
        }
    }
}