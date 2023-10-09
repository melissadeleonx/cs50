// Implementation of Linear Search into code with int
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Use a shorter syntax instead of saying, int numbers[7]; numbers[0] = 20;.... statically design
    int numbers[] = {20, 500, 10, 5, 100, 1, 50};

    int n = get_int("Number: ");
    for (int i = 0; i < 7; i++)
    {
        // We can also use this linear search with char or string, for string, we need to use this function, for example (strcmp(samples[i], n) == 0)
        if (numbers[i] == n)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}