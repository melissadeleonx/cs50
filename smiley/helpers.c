// Make a Green Smiley - any colors is possible as long as we initialize its on the loop
// Inside the header file helpers.h is is the header file bmp.h which includes the structure definition of RGBTRIPLE
// Basically all files are connected by indicate them on the header file and using them in the colorize.c main file
#include "helpers.h"

void colorize(int height, int width, RGBTRIPLE image[height][width])
{
    // Change the color from black to green
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (image[i][j].rgbtRed == 0x00 && image[i][j].rgbtGreen == 0x00 && image[i][j].rgbtBlue == 0x00)
            {
                image[i][j].rgbtGreen = 0xff;
            }
        }
    }
}
