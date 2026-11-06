#include <stdio.h>

void main()
{
    int choice;
    float num1, num2, result;
    do
    {
        printf("==== CALCULATOR ====\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1: 
            printf("Enter First Number: ");
            scanf("%f", &num1);
            printf("Enter Second Number: ");
            scanf("%f", &num2);
            printf("Result: %.2f\n", num1 + num2);
            break;
            case 2: 
            printf("Enter First Number: ");
            scanf("%f", &num1);
            printf("Enter Second Number: ");
            scanf("%f", &num2);
            printf("Result: %.2f\n", num1 - num2);
            break;
            case 3: 
            printf("Enter First Number: ");
            scanf("%f", &num1);
            printf("Enter Second Number: ");
            scanf("%f", &num2);
            printf("Result: %.2f\n", num1 * num2);
            break;
            case 4: 
            printf("Enter First Number: ");
            scanf("%f", &num1);
            printf("Enter Second Number: ");
            scanf("%f", &num2);
            printf("Result: %.2f\n", num1 / num2);
            break;
            case 5: 
            printf("Exiting Calculator...\n");
            break;
            default:
            printf("Invalid Choice! Please Try Again.\n");
        }

    } 
    while(choice != 5);
}