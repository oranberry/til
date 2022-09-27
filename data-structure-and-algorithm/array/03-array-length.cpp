// 💫 Array Capacity VS Length
// The Array's capacity must be decided when the Array is created. The capacity cannot be changed later.
// What do we do if we get a 7th DVD and we'd like all our DVD's in the same Array?
// Well, unfortunately it's the same as it is with our cardboard box.
// We'll need to go get a larger one, and then move all the existing DVD's into it, along with the new one.

// The other definition of length is the number of DVDs, or other items, currently in the Array.
// This is something you'll need to keep track of yourself,
// and you won't get any errors if you overwrite an existing DVD, or if you leave a gap in the Array.

#include <iostream>
using namespace std;

int main()
{
    // Create a new array with a capacity of 6.
    int array[6];
    // Current length is 0, because it has 0 elements.
    int length = 0;

    // Add 3 items into it.
    for (int i = 0; i < 3; i++)
    {
        array[i] = i * i;
        // Each time we add an element, the length goes up by one.
        length++;
    }

    cout << "The Array has a capacity of " << sizeof(array);
    cout << "The Array has a length of " << length;

    return 0;
}