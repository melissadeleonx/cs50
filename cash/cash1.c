#include <cs50.h>
#include <stdio.h>

// New function to get the cents(change owed). Use the prompt input of the user and assign to an int inside the function definition
int get_cents(const char *prompt);

// Functions to calculate how many of the specific coin should be handed to the customer
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents("Change due: ");

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("Number of coins: %i\n", coins);
}

int get_cents(const char *prompt)
{
    int n;
    do
    {
        n = get_int("Change due: ");

        if (n < 1)
        {
            printf("Please enter a positive number\n");
        }
    }
    while (n < 1);
    return n;
}

int calculate_quarters(int cents)

{
    return cents / 25;
}

int calculate_dimes(int cents)
{
    return cents / 10;
}

int calculate_nickels(int cents)
{
    return cents / 5;
}

int calculate_pennies(int cents)
{
    return cents / 1;
}