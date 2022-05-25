// 💫 overloading
// Overloading means defining two or more functions or operators that have the same name,
// but whose effect depends on the types of their actual arguments

// Function Overloading
// 1️⃣ print an int
void print(int x)
{
    cout << x;
}

// 2️⃣ print a Passenger
void print(const Passenger &pass)
{
    cout << pass.name << " " << pass.mealPref;

    if (pass.isFreqFlyer)
    {
        cout << " " << pass.freqFlyerNo;
    }
}
// When the print function is used, the compiler considers the types of the actual argument
// and invokes the appropriate function, that is, the one with signature closet to the actual arguments.

// **********************************************************//
// Operator Overloading
// C++ also allows overloading of operators, such as +, *, +=, and <<.

bool operator==(const Passenger &x, const Passenger &y)
{
    return x.name == y.name && x.mealPref == y.mealPref && x.isFreqFlyer == y.isFreqFlyer && x.freqFlyerNo == y.freqFlyerNo;
}

// Overloading the == operator allows us to naturally test for the equlity of two objects,
// p1 and p2, with the expression p1 == p2