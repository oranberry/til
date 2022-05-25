// 💫 Argument passing - pass by reference
// By default, arguments in C++ programs are passed by value.
// When arguments are passed by value, the system makes a copy of the variable to be passed to the function.
// Modifications made to a formal argument in the function do not alter the actual argument.

// Sometimes it is useful for the function to modify one of its arguments.
// To do so, we can explicitly define a formal argument to be a reference type.
// Any modifications made to an argument in the function modifies the corresponding actual argument.
// This is called passing the argument by reference.

#include <iostream>
using namespace std;

void f(int value, int &ref);

int main()
{
    int cat = 1;
    int dog = 5;

    f(cat, dog); // pass cat by value, dog by ref

    cout << cat << endl; // outputs 1
    cout << dog << endl; // outputs 6

    return 0;
}

// one value and one reference
void f(int value, int &ref)
{
    value++; // no effect on the actual argument
    ref++;   // modifies the actual argument

    cout << value << endl; // outputs 2
    cout << ref << endl;   // outputs 6
}