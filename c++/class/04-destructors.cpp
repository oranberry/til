// 💫 Destructors
// A destructor is a member function that is automatically called when a class object ceases to exist.
// The destructor for a class T is denoted ~T. It takes no arguments and has no return type.
// When the object ceases to exist, it is the responsibility of the destructor to return these resources to the system.

class Vect // a vector class
{
public:
    Vect(int n); // constructor, given size
    ~Vect();     // destructor
    // ... other public members omitted
private:
    int *data; // an array holding the vector
    int size;  // number of array entries
};

Vect::Vect(int n) // constructor
{
    size = n;
    data = new int[n]; // allocate array
}

Vect::~Vect() // destructor
{
    delete[] data; // free the allocated array
}

// Every class that allocates its own objects using new should:
// Define a destructor to free any allocated objects.
// Define a copy constructor, which allocates its own new member storage and copies the contents of member variables.
// Define an assignment operator, which deallocates old storage, allocates new storage, and copies all member variables.
