#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height = get_int("Height: ");
    draw(height);

}


void draw(int n)
{

// Reiterate row by row
for (int i = 0; i < n; i++)
    {
        // Making sure that when i is 1, 1 brick is print out
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}