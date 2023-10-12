// Pseudocode for the Plurality.c Voting program
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Max number of candidates - MAX is a constant equals to 9
#define MAX 9

// Candidates have name and vote count
typedef struct
{
    string name;
    int votes;
}
candidate;

// Array of candidates
candidate candidates[MAX];

// For this problem, we are using 3 candidates but we can input up to 9 candidates
candidates[0].name = "Alice";
candidates[0].votes = ;

candidates[0].name = "Bob";
candidates[0].votes = ;

candidates[0].name = "Charlie";
candidates[0].votes = ;

// Number of candidates - 3?
int candidate_count;

// Function prototypes
// Complete the bool vote function
bool vote(string name);
void print_winner(void);

int main(int argc, string argv[])
{
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: plurality [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates
    candidate_count = argc - 1;
    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
    }

    int voter_count = get_int("Number of voters: ");

    // Loop over all voters
    for (int i = 0; i < voter_count; i++)
    {
        string name = get_string("Vote: ");

        // Check for invalid vote
        if (!vote(name))
        {
            printf("Invalid vote.\n");
        }
    }

    // Display winner of election
    print_winner();
}

// Update vote totals given a new vote
bool vote(string name)
{
    return false;
}

// Print the winner (or winners) of the election
void print_winner(void)
{
    // TODO
    return;
}