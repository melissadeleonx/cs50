#include <cs50.h>
#include <stdio.h>

// Goal is to make right-aligned pyramid of blocks(#) like in World 1-1 in Nintendo’s Super Mario Brothers
int main(void)
{
    // First declare n as the size input, meaning the largest height and width of the pyramid
    int n;
    do
    {
        n = get_int("Size: ");
    } while (n < 1);

    // Print . as the space then remove it later after we identify how to make the right pyramid
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n - i; j++)
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