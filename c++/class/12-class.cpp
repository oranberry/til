class Vect
{
public:
    Vect(int n);
    ~Vect();
    // ... other public members omitted
private:
    int *data;
    int size;
};

Vect::Vect(int n)
{
    size = n;
    data = new int[n];
}

Vect::~Vect()
{
    delete[] data;
}

// Every class that allocates its own objects using new should:
// Define a destructor to free any allocated objects.
// Define a copy constructor, which allocates its own new member storage and copies the contents of member variables.
// Define an assignment operator, which deallocates old storage, allocates new storage, and copies all member variables.
