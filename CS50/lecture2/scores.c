#include <stdio.h>
#include <cs50.h>
// Get the average of the scores - the numbers represent hi! in ASCII
// First version, we use 3 different variables with almost the same name
// Second version, we will use the type of data called ARRAY - allows us to store multiple values in the same variable
// Third version is to prompt the user to provide the score using get_int(do not forget the cs50.h library)
// Something is still off with the third version, often called 'code smell' when something is a bit o
int main (void)
{
    // Use [] sign to declare how much are the data inside the array and indexing it from 0 like many other counts in programming
    int scores[3];

    // Initialize the array
    scores[0] = get_int("Score: ");
    scores[1] = get_int("Score: ");
    scores[2] = get_int("Score: ");

    printf("Average: %f\n", ((float)scores[0] + scores[1] + scores[2]) / 3);
    // Typecasting is the solution to get a float result of integers or we can also put a decimal .0 on the number 3(but not ideal). As long as one of the values is float, all will be treated as float
}