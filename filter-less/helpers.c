#include "helpers.h"
#include <math.h>

// Convert image to grayscale
// RGB color values are all the same = average of the red green blue values
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i <= height; i++)
    {
        for (int j = 0; j <= width; j++)
        {
            // If average is 0, the pixels will be completely black. Add 1 to prevent it.
            float RGBaverage = round(image[i][j].rgbtRed + image[i][j].rgbtGreen + image[i][j].rgbtBlue + 1) / 3.0;

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
            // Use the float data type and round off the answer to the nearest integer
            float sepiaRed = round(.393 * image[i][j].rgbtRed + .769 * image[i][j].rgbtGreen + .189 * image[i][j].rgbtBlue);
            float sepiaGreen = round(.349 * image[i][j].rgbtRed + .686 * image[i][j].rgbtGreen + .168 * image[i][j].rgbtBlue);
            float sepiaBlue = round(.272 * image[i][j].rgbtRed + .534 * image[i][j].rgbtGreen + .131 * image[i][j].rgbtBlue);

            // Values should be capped at 255 to guarantee that the resulting red, green, and blue values will be whole numbers
            // between 0 and 255, inclusive
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
            if (sepiaBlue > 255)
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
        // Iterate through the first half of the image width
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
// Use 'box blur'taking each pixel and, for each color value, giving it a new value by averaging the color values of neighboring
// pixels.
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    // Create a copy of the image to store the blurred values of the pixels
    RGBTRIPLE copy[height][width];

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            // Sum of the each color values within the 3x3 box. Initialize them with 0.
            int newRed = 0;
            int newGreen = 0;
            int newBlue = 0;

            // Number of pixels within the 3x3 box
            int count = 0;

            // Iterate through the neighboring pixels surrounding the central pixel within the 3x3 box
            for (int npi = i - 1; npi <= i + 1; npi++)
            {
                for (int npj = j - 1; npj <= j + 1; npj++)
                {
                    // Condition to make sure blur correctly filters pixel on edges and corners
                    if (npi >= 0 && npi < height && npj >= 0 && npj < width)
                    {
                        newRed += image[npi][npj].rgbtRed;
                        newGreen += image[npi][npj].rgbtGreen;
                        newBlue += image[npi][npj].rgbtBlue;
                        count++;
                    }
                }
            }
            // Average of the color values of all of the pixels within the 3x3 box
            // Use float to get the average and round them off to the nearest integer
            float averageRed = (float) newRed / count;
            float averageBlue = (float) newGreen / count;
            float averageGreen = (float) newBlue / count;

            copy[i][j].rgbtRed = round(averageRed);
            copy[i][j].rgbtGreen = round(averageBlue);
            copy[i][j].rgbtBlue = round(averageGreen);
        }
    }
    // Assign the blurred values from the copy image back to the original image
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            image[i][j] = copy[i][j];
        }
    }
    return;
}
