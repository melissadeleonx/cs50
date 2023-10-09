#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Use a shorter syntax instead of saying, int numbers[7]; numbers[0] = 20;.... statically design
    int numbers[] = {20, 500, 10, 5, 100, 1, 50};

    int n = get_int("Number: ");
    for (int i = 0; i < 7; i++)
    {
        if (numbers[i] == n)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}