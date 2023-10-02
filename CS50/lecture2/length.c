#include <stdio.h>
#include <cs50.h>

// Write a pseudocode(int i in this context is the length of the string)
// First version, we use the while loop to get the lenght of the string. I want to try the other types of loops; for loop will just increment it as 0 1 2 3 4 5 6 and not really indicate the total
// Do while loop also works the same as while, make sure to put ' ' on the \O nul character
// If you want to get the total of i, put the printf outside the loop
// Let's put it back to while again.
// Second version is trying to make our own function to get the stringlength!! I ROCK IT!!
// Between numbers and letters in ASCII, the program interprets them using the datatype variables

int string_length(string s); // string s in this prototype function represent any string variable in the name, it will carry over the definition of the function
// Why? So we can reuse the function and it won't be limited to the name or the first string variable of main.
// Trying the array of strings on stringarray.c

int main(void)
{
    string name = get_string("Name: ");
    int length = string_length(name);
    printf("The name has %i letters.\n", length);
}




int string_length(string s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return i; // not print it because the return value will be used on the main code
}