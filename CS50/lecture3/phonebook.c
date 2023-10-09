// Poor Design Set-up but it works - next term to study DATA STRUCTURES!
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string names[] = {"Carter", "David"};

    // How to store the phone number systematically? We can combine names and numbers as strings but it is not very sophisticated
    // There is a term called 2D arrays but will be discussed in later lectures. For now, here is the solution.
    string numbers[] = {"+1-619-0000", "+1-789-0101"};

    string name = get_string("Name: ");
    for (int i = 0; i < 2; i++)
    {
        if (strcmp(names[i], name) == 0)
        {
            // We are printing the string numbers, since it is a phonebook and we need to find the number!
            printf("Found %s: %s\n", names[i], numbers[i]);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}