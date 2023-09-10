#include <cs50.h>
#include <stdio.h>

int main(void)

{ int height;
    do
    {height = get_int("Height: ");

    } while (height > 1); while (height < 8);



// Goal is to recreate a right-aligned pyramid
// Prompt the user to put the height of the pyramid. Height always greater than 1
// Use the 'for' function to make the row always subtracting 1 from the height
