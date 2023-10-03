#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Learn about exit status, a feature in main. It is an ability to signal user whether something was successful or not
// Let's make an example again with command-lines int argc and string argv
int main(int argc, string argv[]) // Do not forget [] on argv
{
    // Implement the conditionals, do not confuse the number of counts to number of argv which in coding always start with 0, it means here, 2 = argv[0] and argv[1]
    if (argc != 2)
    {
        printf("Missing command-line argument\n");
        return 1; // This is the exit status. Anytime something is wrong and the conditionals are not implemented correctly, return a non zero value to main
    } else
    {
        printf("Hello %s\n", argv[1]);
    }

}