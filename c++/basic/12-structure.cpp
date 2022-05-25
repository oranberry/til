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

    Passenger *p;
    p = new Passenger; // p points to the new Passenger

    // set the structure members
    // (Arrow operator: (*p).mealPref == p->mealPref)
    p->name = "Pocahontas";
    p->mealPref = REGULAR;
    p->isFreqFlyer = false;
    p->freqFlyerNo = "NONE";

    delete p; // destroy the object p points to

    // **********************************************************//

    char *buffer = new char[500]; // allocate a buffer of 500 chars
    buffer[3] = 'a';              // still accessed using []
    delete[] buffer;              // delete the buffer

    // If an object is allocated with new...
    // ...It should eventually be deallocated with delete.
    // Inaccessible objects in dynamic memory called a memory leak
    return 0;
}
