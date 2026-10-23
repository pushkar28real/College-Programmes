#include <stdio.h>

void greet(char name[50]) // Function to display a greeting message
{
    printf("Hello! %s, Welcome to the Function concept of C Programming.\n", name);
}
void main() // Main function to call the greet function multiple times
{
    greet("Rahul");
    greet("Mohan");
    greet("Sohan");
}