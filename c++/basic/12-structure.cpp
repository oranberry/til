// 💫 Structures
// A structure is useful for storing an aggregation of elements.
// Unlike an array, the elements of a structure may be of different types.
// Each member of a structure is referred to by a given name.

#include <iostream>
#include <string>
using namespace std;

enum MealType
{
    NO_PREF,
    REGULAR,
    LOW_FAT,
    VEGETARIAN
};

struct Passenger
{
    string name;        // passenger name
    MealType mealPref;  // meal preference
    bool isFreqFlyer;   // in the frequent flyer program?
    string freqFlyerNo; // the passenger’s freq. flyer number
};

int main()
{
    // declare and initialize a variable named "pass" of this type
    Passenger pass = {"John Smith", VEGETARIAN, true, "293145"};

    // member selection operator .
    pass.name = "Pocahontas"; // change name
    pass.mealPref = REGULAR;  // change meal preference

    // structures of the same type may be assigned to one another
    // for example, if p1 and p2 are of type Passenger,
    // then p2 = p1 copies the elements of p1 to p2.

    // ✨ Pointers, Dynamic Memory, and the "new" Operator
    // The C++ run-time system reserves a loarge block of memory called the free store (sometimes called heap memory)
    // The operator "new" dynamically allocates the correct amount of storage
    // for an object of a given type from the free store and returns a pointer to this object.
    // That is, the value of this pointer is the address where this object resides in memory.

    // p be a pointer to a Passenger structure
    Passenger *p;
    p = new Passenger; // p points to the new Passenger

    // set the structure members
    // we could access one of its members, say the malPref field, using the expression (*p).mealPref.
    // pointer_name->member is equivalent to (*pointer_name).member
    // (Arrow operator: (*p).mealPref == p->mealPref)
    p->name = "Pocahontas";
    p->mealPref = REGULAR;
    p->isFreqFlyer = false;
    p->freqFlyerNo = "NONE";

    // This new passenger object continues to exist in the free store until it is explicitly deleted
    // a process that is done using the delete operator, which destorys the object and returns its space to the free store.
    delete p; // destroy the object p points to

    // **********************************************************//
    // Arrays can also be allocated with new.

    char *buffer = new char[500]; // allocate a buffer of 500 chars
    buffer[3] = 'a';              // still accessed using []
    delete[] buffer;              // delete the buffer

    // If an object is allocated with new...
    // ...It should eventually be deallocated with delete.
    // Inaccessible objects in dynamic memory called a memory leak
    return 0;
}
