// Creating Exceptions
class MathException
{ // generic math exception
public:
    MathException(const string &err) : errMsg(err) {}
    string getError() { return errMsg; } // access error message
private:
    string errMsg; // error message
}

class ZeroDivide : public MathException
{
public:
    ZeroDivide(const string &err) : MathException(err) {}
};

class NegativeRoot : public MathException
{
public:
    NegativeRoot(const string &err) : MathException(err) {}
};

// try and catch
try
{
    // ... application computations
    if (divisor == 0) // attempt to divide by 0?
        throw ZeroDivide("Divide by zero in Module X");
}
catch (ZeroDivide &zde)
{
    // handle division by zero
}
catch (MathException &me)
{
    // handle any math exception other than division by zero
}
