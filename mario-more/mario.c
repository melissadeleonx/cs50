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

#include <cs50.h>
#include <stdio.h>


    // Print the right pyramid
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n - i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < i + 1; k++)
    {

        printf("#");
    }
     // Print the space in between using . for now then change it to space
    printf("  ");

    // Add another counter variable for the left pyramid
        for (int l = 0; l < i + 1; l++)
        {
            printf("#");
        }
          printf("\n");
    }
    return 0;
}    // Print the left pyramid, since they will all be in the same levels, the conditionals should be together with other conditionals under 1 major conditionals
