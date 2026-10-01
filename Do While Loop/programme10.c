// Write a prograamme that programme work like a calculator using do while loop

#include <stdio.h>
void main()
{
    int choice;
    double num1, num2, result;
    do
    {
        printf("==== CALCULATOR ====\n.1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 + num2;
                printf("Result: %.2lf\n", result);
                break;
            case 2:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 - num2;
                printf("Result: %.2lf\n", result);
                break;
            case 3:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 * num2;
                printf("Result: %.2lf\n", result);
                break;
            case 4:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                if(num2 != 0)
                {
                    result = num1 / num2;
                    printf("Result: %.2lf\n", result);
                }
                else
                {
                    printf("Error! Division by zero is not allowed.\n");
                }
                break;
            case 5:
                printf("Exiting calculator...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    while(choice != 5);
}