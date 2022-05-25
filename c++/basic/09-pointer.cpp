// 💫 Pointers
// Each program variable is stored in the computer's memory at some location, or address.
// A pointer is a variable that holds the value of such an address.
// int* denotes a pointer to an integer

// Two essential operators are used to manipulate pointers.
// 1️⃣ The first returns the address of an object in memory - address operator &
// if x is an integer variable, &x is the address of x in memory
// 2️⃣ The second returns the contents of a given address - * operator
// Accessing an object's value from its address is called dereferencing.

#include <iostream>
using namespace std;

int main()
{
    char ch = 'Q';
    char *p = &ch; // p holds the address of ch
    cout << *p;    // outputs the character 'Q'

    ch = 'Z';   // ch now holds 'Z'
    cout << *p; // outputs the character 'Z'

    *p = 'X';   // ch now holds 'X'
    cout << ch; // outputs the character 'X'

    // ⚠️ Beware when declaring two or more pointers on the same line
    // The * operator binds with the variable name, not with the type name.
    int *x, y, z; // same as: int* x; int y; int z;

    int *x;
    int *y;
    int *z;

    return 0;
}

// pointers need not point only to fundamental types, such as char and int
// they may also point to complex types and even to functions

// we can declare a pointer to be of type void*
// such a pointer can point to a variable of any type.
