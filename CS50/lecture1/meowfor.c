#include <stdio.h>

// This code is for the for LOOP subject, same example is meow

int main(void)
{
    // Initialize the value of i and its datatype!!(which always start depending on the programmer with 0) and indicate its paramenter or limitation like, should i be less than or greater than a certain number
    // Try on your own
    // for and while loops are almost the same, whichever you choose to make the code design more sophisticated
    // also there are difference with scopes, where for is more limited with the () and what functions{} is related to that initialization while 'while has more scope and continue to exist. For example () {} {} {} - more later
    for (int i = 0; i < 3; i++)
    {
        printf("meow\n");
     // no need for now to put the increments here
     // try to do -- : the variable i(count) will loop infinitely as long as it does not reach 10 making it smaller but goes on and on and on
     // we can try a more formatted code for -- if we interchange the assigned count of i to 3 and i should be > 0; i-- same return, different version
    }
}