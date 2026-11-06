// Programme for Charactre change from upper case to lower case and vice versa...

#include <stdio.h>
#include <conio.h>

void main()
{
    char input;
    printf("Enter a Character: ");
    scanf("%c", &input);

    printf("Converted Character: %c", input^32);
    getch();
}