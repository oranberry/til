// 💫 Constructors and Destructors
// An important aspect of classes is the capability to initialize a class’s member data.
// 👉🏻 A constructor is a special member function whose task is to perform such an initialization.
// It is invoked when a new class object comes into existence.
// 👉🏻 A destructor member function is called when a class object goes out of existence.

// constructors
// A constructor member function’s name is the same as the class, and it has no return type.
#include <iostream>
using namespace std;

enum MealType
{
    NO_PREF,
    REGULAR,
    LOW_FAT,
    VEGETARIAN
};

class Passenger
{
public:
    Passenger(); // default constructor (no arguments)
    Passenger(const string &nm, MealType mp, const string &ffn = "NONE");
    // ffn="NONE" indicates that the argument for ffn is a default argument
    // an actual argument need not be given, and if so the value "NONE" is used instead.
    Passenger(const Passenger &pass); // copy constructor
    // ...
private:
    string name;
    MealType mealPref;
    bool isFreqFlyer;
    string freqFlyerNo;
};

// Default Constructor
Passenger::Passenger()
{
    name = "--NO NAME--";
    mealPref = NO_PREF;
    isFreqFlyer = false;
    freqFlyerNo = "NONE";
}

// Constructor given member values to initialize
Passenger::Passenger(const string &nm, MealType mp, const string &ffn)
{
    name = nm;
    mealPref = mp;
    isFreqFlyer = (ffn != "NONE"); // true only if ffn given
    freqFlyerNo = ffn;
}
// initializing clas members with initializer lists
// C++ provides an alter- nate method of initialization called an initializer list.
// This list is placed between the constructor’s argument list and its body.
// It consists of a colon (:) followed by a comma-separated list of the form member name(initial value).
// Passenger::Passenger(const string &nm, MealType mp, string ffn)
//     : name(nm), mealPref(mp), isFreqFlyer(ffn != "NONE")
// {
//     freqFlyerNo = ffn;
// }

// Copy Constructor
// Constructor is given a Passenger reference from which to copy information.
Passenger::Passenger(const Passenger &pass)
{
    name = pass.name;
    mealPref = pass.mealPref;
    isFreqFlyer = pass.isFreqFlyer;
    freqFlyerNo = pass.freqFlyerNo;
}

// Examples of how the constructors above can be invoked to define Passenger objects.
// default constructor
Passenger p1;

// 2nd constructor
Passenger p2("John Smith", VEGETARIAN, 293145);

// 2nd constructor (not a frequent flyer)
Passenger p3("Pocahontas", REGULAR);

// Copy constructor (copied from p3)
Passenger p4(p3);

// Copy constructor (copied from p2)
Passenger p5 = p2;

// default constructor
Passenger *pp1 = new Passenger;

// 2nd constructor (not a frequent flyer)
Passenger *pp2 = new Passenger("JoeBlow", NO_PREF);

// default constructor
Passenger pa[20];
