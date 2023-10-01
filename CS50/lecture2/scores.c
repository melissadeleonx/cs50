#include <stdio.h>
#include <cs50.h>
// Get the average of the scores - the numbers represent hi! in ASCII
// First version, we use 3 different variables with almost the same name
// Second version, we will use the type of data called ARRAY - allows us to store multiple values in the same variable
// Third version is to prompt the user to provide the score using get_int(do not forget the cs50.h library)
// Something is still off with the third version, often called 'code smell' when something is a bit off
// Fourth version will use a loop, where i(counter) will represent the number of array using the for loop
// Use the array programmatically so the code is efficient.
// For the number of score[arrays], we can prompt the user to provide it or put it as constant so we can go back and change it easily const int N = 3;

int main (void)
{
    int n = get_int("How many scores? ");
    // Use [] sign to declare how much are the data inside the array and indexing it from 0 like many other counts in programming
    int scores[n];
    for (int i = 0; i < n; i++)
    {
        scores[i] = get_int("Score: ");
    }

    printf("Average: %f\n", ((float)scores[0] + scores[1] + scores[2]) / 3);
    // Typecasting is the solution to get a float result of integers or we can also put a decimal .0 on the number 3(but not ideal). As long as one of the values is float, all will be treated as float
}