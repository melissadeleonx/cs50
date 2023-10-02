#include <stdio.h>

// Goal is to learn more about the data type char = ' '; Each letters, numbers and symbols are characters
// With char, letters can be converted to numbers and from decimal numbers to binary numbers, the machine code of the computer
// First version is direct to the point with char C1C2C3, good to note that string are actually arrays of char, for example, the word HI! has [3] arrays
// Second version, using ASCII, we will convert letters to numbers but still printing the char[count of string]
// Good to note that for char letters, we put ' ' and with numbers there is no need. For char numbers, the representation is %i too.
// C knows ASCII and Unicode so it recognizes the conversion
// Third version is now using string HI!
int main(void)
{
    string hi = "HI!";
    printf("%s", hi);
}

