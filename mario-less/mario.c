#include <cs50.h>
#include <stdio.h>

// Goal is to recreate a right-aligned pyramid

int main(void)
{
    // Prompt the user to put the height of the pyramid

    int height = get_int("Height: ");

    //  not less than 1 nor more than 8. Reprompt again if user gives an invalid answer.
    // Use the 'for' function to make the ascending with the row always subtracting 1 from the height

    for (int i = 1; i <= height; i++);
        {
            for j = 1; j <= height - 1; j++;
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
