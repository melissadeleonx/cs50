#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user for x
    int first_number = get_int("first number: ");

    // Promp user for y
    int second_number = get_int("second number: ");

    // Add x + y
    printf("Sum is %i\n", first_number + second_number);

    // Simpler, shorter codes - the code depends on the intention of the program

    // From x and y, we can name our variables depending on the context of the program

    // More than 4 billion of integers might run out the computer memory as integer is usually 32 bit(2 billion + and 2 billion -)
    // If there is a calculation for more than that, we can change the data type to long(%li), it has 64 bit
    // Conditions or conditionals: if (x < y){ printf("");} The word is IF is not a function, it is a conditionals in C
    // if, else if, else for 3 options or we can use if and else for 2 options


}