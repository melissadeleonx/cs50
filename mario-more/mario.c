#include <cs50.h>
#include <stdio.h>
// Goal is to recreate Super Mario's two adjacent pyramids of blocks

int main(void)

// Prompt the user to enter the height
{
    int height, rows, columns;

    do
    {
        height = get_int("Enter the height: ");
        if (height < 1 || height > 8)
        {
            printf("Enter a number from 1 to 8\n");
        }
    }
    while (height < 1 || height > 8);

    // First pyramid
    for (rows = 0; rows < height; rows++)
    {
        for (columns = 0; columns < (height - rows - 1); columns++)
        {
            printf(" ");
        }
        for (columns = 0; columns < (rows + 1); columns++)
        {
            printf("#");
        }
        // Make spaces

        printf("  ");

        // Second Pyramid
        for (columns = 0; columns <= rows; columns++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}