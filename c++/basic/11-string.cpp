// 💫 String
// A string literal, such as "Hello World", is represented as a fixed length array of characters
// that ends with the null character.

// C++ provides a string type as part of its Standard Template Library(STL)
// In order to use STL strings it is necessary to include the header file <string>

#include <iostream>
#include <string>
using std::cout;
using std::string;

int main()
{
    string s = "to be";
    // strings may be concatenated using the + operator
    string t = "not " + s;     // "not to be"
    string u = s + " or " + t; // "to be or not to be"

    // strings may be compared with each other using lexicographic (or dictionary) order
    if (s > t)     // true: "to be" > "not to be"
        cout << u; // output: "to be or not to be"

    // other example
    // the number of characters in a string s is given by s.size()
    // strings may be indexed like arrays
    // we can append one string to another using the += operator
    string s = "John";

    int i = s.size(); // i = 4
    char c = s[3];    // c = 'n'
    s += " Smith";    // s = "John Smith"

    return 0;
}