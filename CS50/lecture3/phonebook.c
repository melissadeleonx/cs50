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
            printf("Found %s\n", names[i]);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}