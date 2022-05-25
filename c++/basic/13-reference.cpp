// 💫 References
// A reference is simply an alternative name for an object.
// Given a type T, the notation T& indicates a reference to an object of type T.
// Unlike pointers, which can be NULL, a reference in C++ must refer to an actual variable.
// When a reference is declared, its value must be initialized.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string author = "Samuel Clemens";
    string &penName = author; // penName is an alias for author
    penName = "Mark Twain";   // now author = "Mark Twain"
    cout << author;           // output: "Mark Twain"

    return 0;
}

// References are most often used for passing function arguments
// and are also often used for returning results from functions.