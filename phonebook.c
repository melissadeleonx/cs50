#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char name[100];
    int age;
    long long phoneNumber; // using long long instead of characters to show numbers

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
    scanf("%lld", &phoneNumber); // using long long

    // Print the user's information as confirmation
    printf("\nThank you! Here is the information you provided:\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Phone Number: %lld\n", &phoneNumber);
    return 0;
}



