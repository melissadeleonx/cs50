#include <cs50.h>
#include <stdio.h>

int main(void) {
    int height;

    // Prompt the user for the pyramid height
   do { get_int("Height: ");
   if (height < 1 || height > 8) {
        printf("Height should be between 1 and 8 inclusive.\n");
        }
   while ()
        return 1; // Exit with an error code
    }

    // Loop for each row
    for (int i = 0; i < height; i++) {
        // Print spaces
        for (int j = 0; j < height - i - 1; j++) {
            printf(" ");
        }

        // Print hashes
        for (int j = 0; j < i + 1; j++) {
            printf("#");
        }

        // Move to the next line
        printf("\n");
    }

    return 0; // Exit successfully
}

// Goal is to recreate a right-aligned pyramid
// Prompt the user to put the height of the pyramid. Height always greater than 1
// Use the 'for' function to make the row always subtracting 1 from the height
