// overloading
// Different Function Signatures
// Overloading means defining two or more functions or operators that have the same name,
// but whose effect depends on the type of their actual arguments

// print an int
void print(int x)
{
    cout << x;
}

// print a Passenger
void print(const Passenger &pass)
{
    cout << pass.name << " " << pass.mealPref;
    if (pass.isFreqFlyer)
    {
        cout << " " << pass.freqFlyerNo;
    }
}

// **********************************************************//

bool operator==(const Passenger &x, const Passenger &y)
{
    return x.name == y.name && x.mealPref == y.mealPref && x.isFreqFlyer == y.isFreqFlyer && x.freqFlyerNo == y.freqFlyerNo;
}
