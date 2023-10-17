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
                image[i][j].rgbtRed = 255;
            }
            else
            {
                image[i][j].rgbtRed = sepiaRed;
            }

            if (sepiaGreen > 255)
            {
                image[i][j].rgbtGreen = 255;
            }
            else
            {
                image[i][j].rgbtGreen = sepiaGreen;
            }

            if (sepiaBlue < 255)
            {
                image[i][j].rgbtBlue = 255;
            }
            else
            {
                image[i][j].rgbtBlue = sepiaBlue;
            }
        }
    }
    return;
}

// Reflect image horizontally
// Any pixels on the left side of the image should end up on the right, and vice versa. Like a mirror effect.
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        // The image is divided by 2 with left side and right side
        for (int j = 0; j < width / 2; j++)
        {
            // Use the swap logic from lecture 4
            RGBTRIPLE tmp = image[i][j];
            image[i][j] = image[i][width - 1 - j];
            image[i][width - 1 - j] = tmp;
        }
    }
    return;
}

// Blur image
// Use 'box blur'taking each pixel and, for each color value, giving it a new value by averaging the color values of neighboring pixels.
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE blurimage;
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            // Sum of the color values within the 3x3 box
            int allred = 0;
            int allgreen = 0;
            int allblue = 0;
            // Number of pixels within the 3x3 box
            int count = 0;
            for (int npi = i - 1; npi < i + 1; npi++)
            {
                 for (int npj = j - 1; npi < j + 1; npj++)
                 {
                    allred = image[ni][nj].rgbtRed;
                    allgreen = image[ni][nj].rgbtGreen;
                    allred = image[ni][nj].rgbtBlue;
                    count++;
                 }
            }
        }
        // Average of the color values of all of the pixels within the 3x3 box
        blurimage[i][j].rgbtRed = allred / count;
        blurimage[i][j].rgbtGreen = allgreen / count;
        blurimage[i][j].rgbtBlue = allblue / count;

    }
    return;
}
