// Triple dimensional Array 

#include <stdio.h>

void main()
{
    int i, j, k;
    float marks[2][5][3];

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 5; j++)
        {
            for(k = 0; k < 3; k++)
            {
                printf("Enter the marks of student %d in subject %d of semester %d: ", j + 1, k + 1, i + 1);
                scanf("%f", &marks[i][j][k]);
            }
        }
    }
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 5; j++)
        {
            for(k = 0; k < 3; k++)
            {
                printf("Marks of student %d in subject %d of semester %d is: %.2f\n", j + 1, k + 1, i + 1, marks[i][j][k]);
            }
        }
    }
}