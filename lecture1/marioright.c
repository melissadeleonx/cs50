#include <cs50.h>
#include <stdio.h>

// Goal is to make a right pyramid #
int main(void)
{
    int n;
    do
    {
        n = get_int("Size: "); 
    } while (n < 1);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++) // (--) always lead me to error, lol!
        {
            printf("#");
        }
        printf("\n");
    }
}