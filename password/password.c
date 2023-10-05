// Check that a password has at least one lowercase letter, uppercase letter, number and symbol
// Practice iterating through a string
// Practice using the ctype library

#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Function to implement the rule of the password input
bool valid(string password);

int main(void)
{
    // Prompt user to input the password
    string password = get_string("Enter your password: ");

    // Insert the conditional functions to check if password requirements are met
    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }
}

// TODO: Complete the Boolean function below
bool valid(string password)
{
    // Make bool variables for each rules to make sure the user entered at least one of these characters.
    bool lower = false;
    bool upper = false;
    bool digit = false;
    bool punct = false;


    // Use the ctype library for the for (int i = 0; i < strlen(password); i++)
    {
        if (isalpha(password[i]))
        {
            if (islower(password[i]))
            {
                lower = true;
            }
            else if (isupper(password[i]))
            {
                upper = true;
            }
        }
        else if (isdigit(password[i]))
        {
            digit = true;
        }
        else if (ispunct(password[i]))
        {
            punct = true;
        }
    }
    return lower && upper && digit && punct;
}
