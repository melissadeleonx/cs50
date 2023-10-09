// Implementation of Linear Search into code
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Use a shorter syntax instead of saying, int numbers[7]; numbers[0] = 20;.... statically design
    string samples[] = {"love", "desire", "friendship"};

    string n = get_string("Word: ");
    for (int i = 0; i < 3; i++)
    {
        if (samples[i] == n)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}