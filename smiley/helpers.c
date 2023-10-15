#include "helpers.h"

// Let's make a pseudocode, we found this typedef struct
// {
    //BYTE  rgbtBlue;
    //BYTE  rgbtGreen;
    //BYTE  rgbtRed;
//} __attribute__((__packed__))
// RGBTRIPLE;
// Staff also has a sample solution
void colorize(int height, int width, RGBTRIPLE image[height][width])
{
    {
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            // Make black pixels turn red
            if (image[i][j].rgbtRed == 0x00 && image[i][j].rgbtGreen == 0x00 && image[i][j].rgbtBlue == 0x00)
            {
                image[i][j].rgbtRed = 0xff;
            }
        }
    }
}
}
