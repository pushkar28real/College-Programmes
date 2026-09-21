/*
// Write a programme to display the student grade based on the following table...
  Marks             Grade
  >=75              Grade A
  <75 and >= 50     Grade B
  <50 and >= 25     Grade C
  <25               Fail
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int marks;

    printf("Enter your Marks: ");
    scanf("%d", &marks);

    if(marks >= 75)
    {
        printf("Grade A");
    }
    else if(marks < 75 && marks >= 50)
    {
        printf("Grade B");
    }
    else if(marks < 50 && marks >= 25)
    {
        printf("Grade C");
    }
    else
    {
        printf("Fail");
    }
    getch();
}
 