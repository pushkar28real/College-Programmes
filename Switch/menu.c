#include <stdio.h>
#include <conio.h>

void main()
{
    int choice;
    printf("====MENU====\n1. Dosa\n2. Paw Bhaji\n3. Burger");
    printf("Enter Your Choice: ");
    scanf("%d", &choice);
    
    switch (choice)
    {
    case 1:
        printf("You choose Dosa");
        break;
    case 2:
        printf("You choose PawBhaji");
        break;
    case 3:
        printf("You choose Burger");
        break;
    
    default:
        printf("Wrong Choice");
        break;
    }
}