#include <stdio.h>
#include <cs50.h>

// Goal is to recreate a right-aligned pyramid

int main(void) {
    int height;

    do {
        // Prompt the user for the pyramid height
        height = get_int("Enter the height of the pyramid (1-8): ");

        if (height < 1 || height > 8) {
            printf("Height should be between 1 and 8 inclusive.\n");
        }
    } while (height < 1 || height > 8);

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

// Prompt the user to put the height of the pyramid. Height always greater than 1
// Use the 'for' function to make the row always subtracting 1 from the height
