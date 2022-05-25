// ✨ Function Templates
template <typename T>
T genericMin(T a, T b)
{ // returns the minimum of a and b
    return (a < b ? a : b);
}

cout << genericMin(3, 4) << ' '     // =genericMin<int>(3,4)
     << genericMin(1.1, 3.1) << ' ' // =genericMin<double>(1.1, 3.1)
     << genericMin('t', 'g')        // =genericMin<char>('t','g')
     << endl;

// ✨ class templates
template <typename T>
class BasicVector
{
public:
    BasicVector(int capac = 10);
    T &operator[](int i)
    {
        return a[i];
    }

private:
    T *a;
    int capacity;
}

template <typename T> // constructor
BasicVector<T>::BasicVector(int capac)
{
    capacity = capac;
    a = new T[capacity]; // allocate array storage
}

BasicVector<int> iv(5);     // vector of 5 integers
BasicVector<double> dv(20); // vector of 20 doubles
BasicVector<string> sv(10); // vector of 10 strings