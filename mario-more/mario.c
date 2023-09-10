#include <cs50.h>
#include <stdio.h>

// Goal is to recreate Super Mario's two adjacent pyramids of blocks

int main(void)
{
    int height;
    do {
        // Prompt the user for the pyramid height with height more than 1 but not less than 8 and loop it
        height = get_int("Enter the height of the pyramid (1-8): ");

        if (height < 1 || height > 8) {
            printf("Height should be between 1 and 8 inclusive.\n");
        }
    } while (height < 1 || height > 8);

       // Use the 'for' function to make rows and form the pyramids
for (int i = 0; i < height; i++) {
        // Print spaces
        for (int j = 0; j < height - i - 1; j++) {
            printf(" ");
        }

        // Print hashes
        for (int j = 0; j < i + 1; j++) {
            printf("#");
        }

        // Next line
        printf("\n");
    }
   return 0;
}
