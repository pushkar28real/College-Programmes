// Programme for Check Number is Even or Odd...

#include <stdio.h> 
#include <conio.h> 

void main()
{
    int number; 

    printf("Enter the Number: ");
    scanf("%d", &number);

    if(number % 2 == 0){
        printf("%d is Even Number", number);
    }
    if(number % 2 != 0)
    {
        printf("%d is Odd Number", number);
    }

}