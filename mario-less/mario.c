#include <cs50.h>
#include <stdio.h>

// Goal is to recreate a right-aligned pyramid

int main(void)
{
    // Prompt the user to put the height of the pyramid

    int height = get_int("Height: ");
    int i = 1;
    int j = 1;

    // Height always greater than 1

    for (i < height; i++);

    // Use the 'for' function to make the row always subtracting 1 from the height
        {
            for (j < height - 1; j++);
            {
            printf(" ");
        }
    // Print # as bricks of the pyramid
    for (int j = 1; j <= i; j++) {
            printf("#");
        }

        printf("\n");
    }

    return 0;
}
