#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height = get_int("Height: ");
    for
    // conditionals: if height < 1 or > 8 (or not a positive integer at all), prompt again and again (loop) until valid answer is received
    do {
         get_int("Height: ");
        } while (height > 1);
          while (height < 8);
          printf()

// Add Iterate from 1 through height: On iteration i, print i hashes and then a newline
}



int get_size(void)
{
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1);
    return n;
}

void print_grid(int size)
 {
    for (int i = 0; i < size; i++)
 {
    for (int j = 0; j < size; j++)
    {
        printf("#");
        }
        printf("\n");
        }
}