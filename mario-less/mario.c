#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height = get_int("Height: ");
    int columns = 1;
    int rows = 1;

    for (columns < height; columns++);
        {
            for (rows = height - 1; rows++);
            {
            printf(" ");
        }
    for (rows < columns; rows++) {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}








// Goal is to recreate a right-aligned pyramid
// Prompt the user to put the height of the pyramid. Height always greater than 1
// Use the 'for' function to make the row always subtracting 1 from the height
