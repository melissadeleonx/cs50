// Convert a single command-line argument with no-vowel string
#include <cs50.h>
#include <stdio.h>

string replace(string argv[1]);

int main(int argc, string argv[1])
{
    // If command-line argument is empty, print an Error Message
    if (argc < 2)
    {
        printf("Error, please input a command-line argument.\n");
        return 1;
    }

    // Print the string with no vowels.
    string replace = argv[1];
    printf("%s", replace);
}

string replace(string argv[1])
{
    argv[1] = 0;
    for (int i = 0; i < argv[1]; i++)
    {
        if (argv1[1][i] == 'a');
        {
            printf("6");
        }
    }
    return argv[1];
}
