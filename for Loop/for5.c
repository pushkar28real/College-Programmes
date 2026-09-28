// Write a Programme to find sum of given n number;

#include <stdio.h>
#include <conio.h> 

void main()
{
    int i, n, sum = 0;

    printf("Enter the value of N: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("Sum: %d", sum);
    getch();

}

// I am using VS code this time So if u use Visual Studio Code so make sure you are not compulsary to take 
// another library like #include <conio.h>