// 💫 Writing and Reading Items into an Array with a Loop
// We commonly use a loop to put lots of values into an Array.
// This time, we're going to create an Array of ints and put the first 10 square numbers into it.

#include <iostream>
using namespace std;

int main()
{
    int squareNumbers[10];

    // Go through each of the Array indexes, from 0 to 9.
    for (int i = 0; i < 10; i++)
    {
        // We need to be careful with the 0-indexing. The next square number
        // is given by (i + 1) * (i + 1).
        // Calculate it and insert it into the Array at index i.
        int square = (i + 1) * (i + 1);
        squareNumbers[i] = square;
    }

    // reading items from an array with a loop
    for (int i = 0; i < 10; i++)
    {
        cout << squareNumbers[i];
    }

    return 0;
}
