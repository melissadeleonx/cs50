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
        for (int k = 0; k < i + 1; k++)
    {
        // Print the space in between using . for now then change it to space
        printf("#..");
    }

    // Print the left pyramid, since they will all be in the same levels, the conditionals should be together with other conditionals under 1 major conditionals
    printf("\n");
    }
}