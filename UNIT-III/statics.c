// Statics on a sequence of number( maximum, minimum, sum, average) using centinal controlled loop 

#include <stdio.h>

int main()
{
    const int SENTINEL = -9999;
    int num,sum = 0, min, max, count = 0;
    float average;
    printf("Enter a first number( or %d to stop): ",SENTINEL );
    scanf("%d", &num);
    if( num == SENTINEL)
    {
        printf("NO number Entered\n");
        return 0;
    }
    sum = num;
    count = 1; 
    max = min = num;
    while(1)
    {
        printf("Enter the next number (or %d to stop): ", SENTINEL);
        scanf("%d", &num);
        if(num == SENTINEL)
            break;
            count++;
        if(num > max)
            max = num;
        if(num < min)
            min = num;
    }
    average = sum/count;
    printf("Total Number Entered: %d\n", count);
    printf("Sum = %d\n", sum);
    printf("Maximum = %d\n", max);
    printf("Manimum = %d\n", min);
    printf("Average = %.2f\n", average);
    return 0;
}