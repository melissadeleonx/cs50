// Make a Purple Smiley
// Inside the header file helpers.h is is the header file bmp.h which includes the structure definition of RGBTRIPLE
// Basically all files are connected by indicate them on the header file and using them in the colorize.c main file
#include "helpers.h"

// Make the pixel in purple(How to represent a pixel using a 24-bit color BMP file?)
void colorize(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE Purplepixel;
    Purplepixel.rgbtRed = 128;
    Purplepixel.rgbtGreen = 0x000000;
    Purplepixel.rgbtBlue = 128;

    // Change the color from black to purple
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (image[i][j].rgbtRed == 0x00 && image[i][j].rgbtGreen == 0x00 && image[i][j].rgbtBlue == 0x00)
            {
                image[i][j] = Purplepixel;
            }
        }
    }
}
