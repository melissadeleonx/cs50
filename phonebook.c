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
}



