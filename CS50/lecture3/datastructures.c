// Implement how DATA STRUCTURES work
// For now, the codes look messier but 
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

    people[0].name = "Carter";
    people[0].number = "+1-619-0000";

    people[1].name = "David";
    people[1].number = "+1-789-0101";

    string name = get_string("Name: ");
    for (int i = 0; i < 2; i++)
    {
        if (strcmp(people[i].name, name) == 0)
        {
            // We are printing the string numbers, since it is a phonebook and we need to find the number!
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}