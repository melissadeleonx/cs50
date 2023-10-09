// Implement how DATA STRUCTURES work
#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
}
person;

int main(void)
{
    // Person is the new datatype(different from function) and people is the variable
    person people[2];
    
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