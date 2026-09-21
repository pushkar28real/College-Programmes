// These are two Programmes ......

// 1. Program to convert temperature from celcius to fahrenheit...

#include <stdio.h>
#include <conio.h>

void main()
{
    
    float f, c;
    printf("Enter the Temperature in Celcius: ");
    scanf("%f", &c);
    f = (9.0/5.0)*c + 32;

    printf("Fahrenite Temperature is: %.2f", f);

}


// // 2. Program to convert temperature from fahrenheit to celcius...

#include <stdio.h>
#include <conio.h>

void main()
{

    float f, c;
    printf("Enter the Temperature in Fahrenite: ");
    scanf("%f", &f);
    c = (5.0/9.0)*f - 32;

    printf("Celcius Temperature is: %.2f", c);
    
}