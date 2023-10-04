#include <cs50.h>
#include <stdio.h>

// Goal is to recreate Super Mario's two adjacent pyramids of blocks with space in between, combining right and left pyramid codes
int main(void)

// Prompt the user to enter the height
// Use the do while loop to implement the limitations of the code.
// Use specific variables instead of i, j and k for clarity.
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

    // Print the first pyramid(right)
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
        // Use '.' temporarily and change them to spaces after

        printf("  ");

        // Print the second pyramid (left)
        for (columns = 0; columns <= rows; columns++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}