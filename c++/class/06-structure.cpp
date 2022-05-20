enum MealType
{
    NO PREF,
    REGULAR,
    LOW FAT,
    VEGETARIAN
};

struct Passenger
{
    string name;        // passenger name
    MealType mealPref;  // meal preference
    bool isFreqFlyer;   // in the frequent flyer program?
    string freqFlyerNo; // the passenger’s freq. flyer number
};

Passenger pass = {"John Smith", VEGETARIAN, true, "293145"};

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