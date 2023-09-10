#include <cs50.h>
#include <stdio.h>
// Goal is to recreate Super Mario's two adjacent pyramids of blocks

int main(void)
// First pyramid
{
    int height, rows, columns;

    do { height = get_int("Height: ");
    if(height < 1 || height > 8)
    {
        printf("Enter a number from 1 to 8\n");
    }
    } while(height < 1 || height > 8);

    for(rows = 0; )
}
//2nd pyramid
{
    int height2, rows2, columns2;

    do { height2 = get_int("Height: ");
    if(height2 < 1 || height > 8)
    {
        printf("Enter a number from 1 to 8\n");
    }
    } while(height2 < 1 || height2 > 8);

    for(rows2 = 0; rows2 < height2; rows2++)
    {
        for(columns2 = 0; columns2 <= rows2; columns2++)
        {
            printf("#");
        }
    printf("\n");
    }
}