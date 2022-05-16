// The keyword “const” indicates that the member function
// isFrequentFlyer is an accessor (only read class data)
class Passenger
{
public:
    Passenger();
    bool isFrequentFlyer() const;
    void makeFrequentFlyer(const string &newFreqFlyerNo);

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

class Passenger
{
public:
    Passenger(); // default constructor
    Passenger(const string &nm, MealType mp, const string &ffn = "NONE");
    Passenger(const Passenger &pass); // copy constructor
                                      // ...
};

Passenger::Passenger()
{
    name = "--NO NAME--";
    mealPref = NO PREF;
    isFreqFlyer = false;
    freqFlyerNo = "NONE";
}

Passenger::Passenger(const string &nm, MealType mp, const string &ffn)
{
    name = nm;
    mealPref = mp;
    isFreqFlyer = (ffn != "NONE"); // true only if ffn given
    freqFlyerNo = ffn;
}

Passenger::Passenger(const Passenger &pass)
{
    name = pass.name;
    mealPref = pass.mealPref;
    isFreqFlyer = pass.isFreqFlyer;
    freqFlyerNo = pass.freqFlyerNo;
}

// default constructor
Passenger p1;

// 2nd constructor
Passenger p2("John Smith", VEGETARIAN, 293145);

// 2nd constructor
Passenger p3("Pocahontas", REGULAR);

// Copy constructor
Passenger p4(p3);

// Copy constructor
Passenger p5 = p2;

// default constructor
Passenger *pp1 = new Passenger;

// 2nd constructor
Passenger *pp2 = new Passenger("JoeBlow", NO PREF);

// default constructor
Passenger pa[20];