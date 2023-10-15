// Make a Purple Smiley
// Inside the header file helpers.h is is the header file bmp.h which includes the structure definition of RGBTRIPLE
#include "helpers.h"

void colorize(int height, int width, RGBTRIPLE image[height][width]);

int main(void)
{
    int height = 5;
    int width = 5;

    RGBTRIPLE image[5][5];

    colorize(height, width, image);

    return 0;
}


// Sample Definition by the staff of the colorize function
void colorize(int height, int width, RGBTRIPLE image[height][width])
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
