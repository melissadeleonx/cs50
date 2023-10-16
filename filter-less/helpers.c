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
            int sepiaRed = .393 * image[i][j].rgbtRed + .769 * image[i][j].rgbtGreen + .189 * image[i][j].rgbtBlue;

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
