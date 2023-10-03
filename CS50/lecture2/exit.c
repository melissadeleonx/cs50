#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Learn about exit status, a feature in main. It is an ability to signal user whether something was successful or not
// Let's make an example again with command-lines int argc and string argv
// When doing conditionals, sometimes we can skip else and just do the regular code after if
// Main is now returning something for us, now codes are getting more sophisticated, what to do next?
// In real life programming, there are many possible numbers used as a return value if something went wrong aside from one
// Example of return exits are 404 error, return error exits codes defined by the programmers, can be 1 to 2 billion as long as it is non-0
int main(int argc, string argv[]) // Do not forget [] on argv
{
    // Implement the conditionals, do not confuse the number of counts to number of argv which in coding always start with 0, it means here, 2 = argv[0] and argv[1]
    if (argc != 2)
    {
        printf("Missing command-line argument\n");
        return 1; // This is the exit status. Anytime something is wrong and the conditionals are not implemented correctly, return a non zero value to main
    }
        printf("Hello %s\n", argv[1]);
        return 0; // Signal the computer that everything is okay
}