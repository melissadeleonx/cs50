#include <stdio.h>

int main() {
    int calls; // Declare an integer variable to store user input

    // Display a message to the user
    printf("Please enter the number of calls: ");

    // Read an integer input from the user
    scanf("%d", &calls);

    // Display a message using the user's input
    printf("You entered %d calls.\n", calls);

    return 0;
}