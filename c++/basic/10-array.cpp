// 💫 Arrays
// An array is a collection of elements of the same type.
// Each element of the array is referenced by its index, a number from 0 to N -1
// Once declared, it is not possible to increase the number of elements in an array.
// Indexing an array outside of its declared bounds is a common programming error.

#include <iostream>
using namespace std;

int main()
{
    double f[5]; // array of 5 doubles: f[0], . . ., f[4]
    int m[10];   // array of 10 ints: m[0], ..., m[9]

    f[4] = 2.5;
    m[2] = 4;

    cout << f[m[2]]; // outputs f[4], which is 2.5

    // **********************************************************//
    // we can initialize its values by enclosing the elements in curly braces { }
    // When doing so, we do not have to specify the size of the array, since the compiler can figure this out.

    int a[] = {10, 11, 12, 13}; // declares a[4] and initializes
    bool b[] = {false, true};   // declares b[2] and initializes
    char c[] = {'c', 'a', 't'}; // declares c[3] and initializes

    // **********************************************************//
    // pointers and arrays
    // The name of an array is equivalent to a pointer to the array's initial element and vice versa.

    char c[] = {'c', 'a', 't'};

    char *p = c;     // p points to c[0]
    char *q = &c[0]; // q also points to c[0]

    cout << c[2] << p[2] << q[2]; // outputs “ttt”

    return 0;
}
