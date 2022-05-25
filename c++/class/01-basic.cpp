// 💫 Classes
// The class provides a way to define new user-defined types, complete with associated functions and operators.

// ✨ Class Structure
// A class consists of members.
// Members that are variables or constants are data members (also called member variables)
// and members that are functions are called member functions (also called methods).

// One important feature of classes is the notion of access control.
// 👉🏻 Public: they are accessible from outside the class
// These are the entities that users of the class are allowed to access
// 👉🏻 Private: they are accessible only from within the class
// These are the entities that users of the class cannot be accessed.
// All external access to class objects takes place through the public members,
// or the public interface as it is called
#include <iostream>
using namespace std;

// Example
class Counter // a simple counter class
{
public:
    // public interface has the three member functions
    Counter();              // initialization
    int getCount();         // get the current count
    void increaseBy(int x); // add x to the count
private:
    int count; // the counter’s value
};

// In order to make clear to the compiler that we are defining member functions of counter,
// we precede each function name with the scoping specifier "Counter::"
// The first of these functions has the same name as the class itself.
// This is  special member function called a constructor
// constructor - initialize the values of the class;s member variable.
Counter::Counter()
{
    count = 0;
}

// get current count
int Counter::getCount()
{
    return count;
}

// add x to the count
void Counter::increaseBy(int x)
{
    count += x;
}

int main()
{
    // declare a new object of type Counter, called ctr
    // (an instance of Counter)
    Counter ctr;

    cout << ctr.getCount() << endl; // prints the initial value (0)

    ctr.increaseBy(3);              // increase by 3
    cout << ctr.getCount() << endl; // prints 3

    ctr.increaseBy(5);              // increase by 5
    cout << ctr.getCount() << endl; // prints 8

    cout << ctr.count << endl; // ILLEGAL - count is private

    return 0;
}
