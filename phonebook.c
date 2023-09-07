#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char name[100];
    int age;
    char phoneNumber[14]; // number of characters for each variables

    // Prompt the user for their name
    printf("Name: ");
    scanf("%s", name);

    //Age
    printf("Age: ");
    scanf("%d", &age);

// Clear the input buffer
    while (getchar() != '\n');

    //Phone Number
    printf("Phone Number: ");
    scanf("14%s", phoneNumber); // Limit input to 14 characters

    // Print the user's information as confirmation
    printf("\nThank you! Here is the information you provided:\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Phone Number: %s\n", phoneNumber);
    return 0;
}



