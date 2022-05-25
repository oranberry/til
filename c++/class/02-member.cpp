// 💫 Member Functions
#include <iostream>
using namespace std;

enum MealType
{
    NO_PREF,
    REGULAR,
    LOW_FAT,
    VEGETARIAN
};

// Class member functions can be placed in two major categories:
// accessor functions - which only read class data
// update functions - which may alter class data
// The keyword “const” indicates that the member function isFrequentFlyer is an accessor (only read class data)
// This informs the user of the class that this function will not change the object contents.

class Passenger // Passenger (as a class)
{
public:
    Passenger(); // constructor (initialize) - no return type
    bool isFrequentFlyer() const;
    // 💥 in-class function
    // bool isFrequentFlyer() const{ return isFreqFlyer; }
    // member functions may either be defined inside or outside the class body. (recommend outside)
    void makeFrequentFlyer(const string &newFreqFlyerNo);
    // ...other member functions (omitted)
private:
    string name;
    MealType mealPref;
    bool isFreqFlyer;
    string freqFlyerNo;
};

bool Passenger::isFrequentFlyer() const
{
    return isFreqFlyer;
}

void Passenger::makeFrequentFlyer(const string &newFreqFlyerNo)
{
    isFreqFlyer = true;
    freqFlyerNo = newFreqFlyerNo;
}

int main()
{
    Passenger pass; // pass is a Passenger
    // ...
    if (!pass.isFrequentFlyer()) // not already a frequent flyer?
    {
        pass.makeFrequentFlyer("392953"); // set pass's freq flyer number
    }
    pass.name = "Joe Blow"; // ILLEGAL! name is private

    return 0;
}