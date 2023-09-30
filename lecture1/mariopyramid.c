#include <cs50.h>
#include <stdio.h>

// Goal is to make 2 pyramids with space in between, combining right and left that I me I did!!
int main(void)
{
    // Prompt user using the do while LOOP
    int n;
    do
    {
        n = get_int("Size: ");
    } while (n < 1);

    // Print the right pyramid
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf(" ");
        }
        // Print # NOW!!
        for (int k = 0; k < i + 1; k++)
    {
        printf("#");
    }
    printf("\n");
    } // Moral of the story: Try and try until you succeed! Go girl!! I am not really sure how I made it happen but I guess I just invert the for loop of the i
      // Coding and Guessing :)
}