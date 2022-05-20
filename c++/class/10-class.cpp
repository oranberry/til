// Classes
// A class consists of members.
// Members that are variables or constants are data members
// members that are functions are called member functions (also called methods)
// One important feature of classes is the notion of access control.
// Public: they are accessible from outside the class
// Private: they are accessible only from within the class
// All external access to class objects takes place through the public members,
// or the public interface as it is called

// Example
class Counter
{ // a simple counter
public:
    Counter();              // initialization
    int getCount();         // get the current count
    void increaseBy(int x); // add x to the count
private:
    int count; // the counter’s value
};

// constructor
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

Counter ctr; // an instance of Counter

cout << ctr.getCount() << endl; // prints the initial value (0)

ctr.increaseBy(3); // increase by 3

cout << ctr.getCount() << endl; // prints 3

ctr.increaseBy(5); // increase by 5

cout << ctr.getCount() << endl; // prints 8

// cout << ctr.count << endl; // ILLEGAL - count is private
