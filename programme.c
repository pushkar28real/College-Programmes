#include <stdio.h>
#include <conio.h>


// Program to find sum of two integer numbers...
void main(){
    int a, b;
    
    printf("Enter First Number: ");
    scanf("%d", &a);
    printf("Enter Second Number: ");
    scanf("%d", &b);
    printf("Sum of %d and %d is: %d", a, b, a + b);
    getch();
}

// Program to convert temperature from celcius to fahrenheit...
void main(){
    
    float f, c;
    printf("Enter the Temperature in Celcius: ");
    scanf("%f", &c);
    f = (9.0/5.0)*c + 32;

    printf("Fahrenite Temperature is: %.2f", f);
}

// Program to convert temperature from fahrenheit to celcius...
void main(){

    float f, c;
    printf("Enter the Temperature in Fahrenite: ");
    scanf("%f", &f);
    c = (5.0/9.0)*f - 32;

    printf("Celcius Temperature is: %.2f", c);
}

// Programme to find area and perimeter of square...
void main(){
    int side;
    int area, parameter;

    printf("Enter the Side of Square: ");
    scanf("%d", &side);
    area = side * side;
    parameter = 4 * side;
    printf("Area of Square is: %d\n", area);
    printf("Parameter of Square is: %d", parameter);
}

// Programme to find area and parameter of rectangle...
void main(){
    int l, b;
    int area, parameter;

    printf("Enter the Length of Rectangle: ");
    scanf("%d", &l);
    printf("Enter the Breadth of Rectangle: ");
    scanf("%d", &b);
    area = l * b;
    parameter = 2 * (l + b);
    printf("Area of Rectangle is: %d\n", area);
    printf("Parameter of Rectangle is: %d", parameter);
}

// Program to find area and parameter of Circle...
void main(){
    int radius;
    float area, parameter;

    printf("Enter the radius of Circle: ");
    scanf("%d", &radius);
    area = 3.14 * radius * radius;
    parameter = 2 * 3.14 * radius;
    printf("Area of Circle is: %.2f\n", area);
    printf("Parameter of Circle is: %.2f", parameter);
}

// Programme to find area and parameter of triangle...
void main(){
    int l, b, h;
    float area, parameter;

    printf("Enter the Length of Triangle: ");
    scanf("%d", &l);
    printf("Enter the Breadth of Triangle: ");
    scanf("%d", &b);
    printf("Enter the Height of Triangle: ");
    scanf("%d", &h);
    area = 0.5 * b * h;
    parameter = l + b + h;
    printf("Area of Triangle is: %.2f\n", area);
    printf("Parameter of Triangle is: %.2f", parameter);
}

