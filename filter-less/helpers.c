#include "helpers.h"

// Convert image to grayscale
// RGB is same value - average of the red green blue values
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
     for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            int RGBaverage = (image[i][j].rgbtRed + image[i][j].rgbtGreen + image[i][j].rgbtBlue)/3;

                image[i][j].rgbtRed = RGBaverage;
                image[i][j].rgbtGreen = RGBaverage;
                image[i][j].rgbtBlue = RGBaverage;
        }
    }
    return;
}

// Convert image to sepia
// The sepia color values should be calculated based on the given algorithm
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            int sepiaRed = round(.393 * image[i][j].rgbtRed + .769 * image[i][j].rgbtGreen + .189 * image[i][j].rgbtBlue);
            int sepiaGreen = round(.349 * image[i][j].rgbtRed + .686 * image[i][j].rgbtGreen + .168 * image[i][j].rgbtBlue);
            int sepiaBlue = round(.272 * image[i][j].rgbtRed + .534 * image[i][j].rgbtGreen + .131 * image[i][j].rgbtBlue);

            //  The red, green, and blue values should be capped at 255
            if (sepiaRed > 255)
            {

            }
            else
            {

            }

            if (sepiaGreen > 255)
            {

            }
            else
            {

            }

            if (sepiaBlue < 255)
            {

            }
            else
            {
                
            }

        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}
