#include <cs50.h>
#include <stdio.h>
// Goal is to recreate Super Mario's two adjacent pyramids of blocks

int main(void)
// First pyramid
{
    int height, rows, columns, side, grid;

    do { height = get_int("Height: ");
    if(height < 1 || height > 8)
    {
        printf("Enter a number from 1 to 8\n");
    }
    } while(height < 1 || height > 8);

    for(rows = 0; rows < height; rows++)
    {
        for(columns = 0; columns < (height - rows - 1); columns++)
        {
            printf(" ");
        }
        for(columns = 0; columns < (rows + 1); columns++)
        {
            printf("#");
        }
    printf("\n");
    }

    // Grid
 for (grid = 0; grid < n; grid++)
    {
    for (side = 0; side < n; j++) {
             printf(" ");
        }
        printf("\n");
    }


    // Second pyramid
    for(rows = 0; rows < height; rows++)
    {
        for(columns = 0; columns <= rows; columns++)
        {
         printf("#");
        }
            printf("\n");
        } return 0;
        }