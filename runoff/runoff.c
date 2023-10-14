//* = Additional comments/pseudocode to further explain the logic of the Runoff Voting Program
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Max voters and candidates
#define MAX_VOTERS 100
#define MAX_CANDIDATES 9

//* We are using 2d array, represented as preferences[i][j] ( i is the vote number(voted candidate) and j is the rank(position of the voted candidate))
// preferences[i][j] is jth preference for voter i
int preferences[MAX_VOTERS][MAX_CANDIDATES];

// Candidates have name, vote count, eliminated status
typedef struct
{
    string name;
    int votes;
    bool eliminated;
}
candidate;

//* Candidates names are input after argv[0]
// Array of candidates
candidate candidates[MAX_CANDIDATES];

// * Both voter count(get_int) and candidate count(argc - 1) are inputs obtained from the user
// Numbers of voters and candidates
int voter_count;
int candidate_count;

// Function prototypes
bool vote(int voter, int rank, string name);
void tabulate(void);
bool print_winner(void);
int find_min(void);
bool is_tie(int min);
void eliminate(int min);

int main(int argc, string argv[])
{
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: runoff [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates
    candidate_count = argc - 1;
    if (candidate_count > MAX_CANDIDATES)
    {
        printf("Maximum number of candidates is %i\n", MAX_CANDIDATES);
        return 2;
    }
    //* Iterate through each candidate
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
        candidates[i].eliminated = false;
    }

    //* Get the number of voters from the user
    voter_count = get_int("Number of voters: ");
    if (voter_count > MAX_VOTERS)
    {
        printf("Maximum number of voters is %i\n", MAX_VOTERS);
        return 3;
    }

    //* Voting program starts here combining votes and ranks
    // Keep querying for votes
    for (int i = 0; i < voter_count; i++)
    {
        //* The length of the rank is argc - 1 = candidate_count
        // Query for each rank
        for (int j = 0; j < candidate_count; j++)
        {
            string name = get_string("Rank %i: ", j + 1);

            //* In real voting scenario, voters need to follow specific guidelines. Otherwise, their votes are not counted.
            // Record vote, unless it's invalid
            if (!vote(i, j, name))
            {
                printf("Invalid vote.\n");
            //* return 4 is deleted to check a more efficient ways of voting without returning to main all the time
            }
        }

        printf("\n");
    }

    //* How calculation and voting works!
    // Keep holding runoffs until winner exists
    while (true)
    {
        //* In tabulation, the eliminated candidated is no longer part of the choices
        // Calculate votes given remaining candidates
        tabulate();

        // Check if election has been won
        bool won = print_winner();
        if (won)
        {
            break;
        }

        // Eliminate last-place candidates
        int min = find_min();
        bool tie = is_tie(min);

        // If tie, everyone wins
        if (tie)
        {
            for (int i = 0; i < candidate_count; i++)
            {
                if (!candidates[i].eliminated)
                {
                    printf("%s\n", candidates[i].name);
                }
            }
            break;
        }

        // Eliminate anyone with minimum number of votes
        eliminate(min);

        // Reset vote counts back to zero
        for (int i = 0; i < candidate_count; i++)
        {
            candidates[i].votes = 0;
        }
    }
    return 0;
}


// Record preference if vote is valid
bool vote(int voter, int rank, string name)
{
    for (int i = 0; i < candidate_count; i++)
    {
        //* Check if the entered candidate name matches a valid candidate name
        if (strcmp(candidates[i].name, name) == 0)
        {
            preferences[voter][rank] = i;
            return true;
        }
    }
    return false;
}

//* Exclude the eliminated candidates, increment votes and ranks
// Tabulate votes for non-eliminated candidates
void tabulate(void)
{
    for (int i = 0; i < voter_count; i++)
    {
        for (int j = 0; j < candidate_count; j++)
        {
            int n = preferences[i][j];

            // Increment only for non-eliminated candidates
            if (!candidates[n].eliminated)
            {
                candidates[n].votes++;
                break;
            }
        }
    }
    return;
}

// Print the winner of the election, if there is one
bool print_winner(void)
{
    for (int i = 0; i < candidate_count; i++)
    {
        //* If a candidate's votes is more than 50% of the total voters, that candidadate won
        if (candidates[i].votes > voter_count / 2)
        {
            printf("%s\n", candidates[i].name);
            return true;
        }
    }
    return false;
}

// Return the minimum number of votes any remaining candidate has
int find_min(void)
{
    //* Start with a value higher than maximum possible votes
    int min = voter_count;

    //* Iterate through each candidate
    for (int i = 0; i < candidate_count; i++)
    {
        //* Excluding the eliminated candidate
        if (!candidates[i].eliminated && candidates[i].votes < min)
        {
            min = candidates[i].votes;
        }
    }
    return 0;
}

// Return true if the election is tied between all candidates, false otherwise
bool is_tie(int min)
{
    bool tie = true;

    for (int i = 0; i < candidate_count && tie; i++)
    {
        tie = candidates[i].eliminated || candidates[i].votes == min;
        return true;
    }
    return false;
}

// Eliminate the candidate (or candidates) in last place
void eliminate(int min)
{
    for (int i = 0; i < candidate_count; i++)
    {
        if(candidates[i].votes == min)
        {
            candidates[i].eliminated = true;
        }
    }
    return;
}