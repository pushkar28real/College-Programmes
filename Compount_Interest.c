// Write a Programme for Compound Interest...

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    float P, R, T, A, CI;

    printf("Enter the principal amount: ");
    scanf("%f", &P);
    printf("Enter the rate of interest: ");
    scanf("%f", &R);
    printf("Enter the time period: ");
    scanf("%f", &T);

    A = P * pow((1 + R / 100), T);
    CI = A - P;

    printf("The Amount is: %.2f\n", A);
    printf("The compound interest is: %.2f", CI);
    getch();
    
}