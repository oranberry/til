// 💫 Classes and Memory Allocation
// When a class performs memory allocation using new, care must be taken to avoid a number of common programming errors.

Vect a(100); // a is a vector of size 100
Vect b = a;  // initialize b from a (DANGER!)
Vect c;      // c is a vector (default size 10)
c = a;       // assign a to c (DANGER!)

Vect::Vect(const Vect &a) // copy constructor from a
{
    size = a.size;                 // copy sizes
    data = new int[size];          // allocate new array
    for (int i = 0; i < size; i++) // copy the vector contents
    {
        data[i] = a.data[i];
    }
}

Vect &Vect::operator=(const Vect &a) // assignment operator from a
{
    if (this != &a) // avoid self-assignment
    {
        delete[] data;                 // delete old array
        size = a.size;                 // set new size
        data = new int[size];          // allocate new array
        for (int i = 0; i < size; i++) // copy the vector contents
        {
            data[i] = a.data[i];
        }
    }
    return *this;
}