#include <cs50.h>
#include <stdio.h>

int get_height(void);
void print_grid(int size);

int main(void)
{
   // Get height of grid
    int n = get_height();
    // Print grid of bricks
    print_grid(n);

   // Add Iterate from 1 through height: On iteration i, print i hashes and then a newline
}








int get_height(void) // conditionals: if height < 1 or > 8 (or not a positive integer at all), prompt again and again (loop) until valid answer is received
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1);
    return n;
    while (n > 8);
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