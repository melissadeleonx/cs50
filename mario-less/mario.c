#include <cs50.h>
#include <stdio.h>

// Goal is to recreate a right-aligned pyramid

int main(void)
{
    // Prompt the user to put the height of the pyramid. Height always greater than 1

    int height = get_int("Height: ");
    int columns = 1;
    int rows = 1;

    // Use the 'for' function to make the row always subtracting 1 from the height

    for (columns < height; columns++);
        {
            for (rows = height - 1; rows++);
            {
            printf(" ");
        }
    // Print # as bricks of the pyramid
    for (rows < columns; rows++) {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}