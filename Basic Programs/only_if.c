// Write a Programme using only if statement ot input the percentage of student and show the result as follows percentage ( p >= 60), first division, if (p >= 50) second division, if (p >= 40), Third division, if (p < 40), Fail...

#include <stdio.h>
#include <conio.h>

void main()
{
    float percentage;

    printf("Enter your Percentage: ");
    scanf("%f", &percentage);

    if(percentage >= 60)
    {
        printf("First Division");
    }
    if(percentage >= 50)
    {
        printf("Second Division");
    }
    if(percentage >= 40)
    {
        printf("Third Division");
    }
    if(percentage < 40)
    {
        printf("Fail");
    }
    getch();
}