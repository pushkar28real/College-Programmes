// Write a programme for Simple Interest...

#include <stdio.h>
#include <conio.h> 

void main()
{
    int p, t;
    float r, si;

    printf("Enter the value of Principal: ");
    scanf("%d", &p);
    printf("Enter the Value of Time: ");
    scanf("%d", &t);
    printf("Enter the Value of Rate: ");
    scanf("%f", &r);

    si = (p * t * r) / 100;
    printf("Simple Interest: %.2f\n", si);
    
}