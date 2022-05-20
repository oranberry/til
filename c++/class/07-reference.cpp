// By default, arguments in C++ programs are passed by value.
// When arguments are passed by value, the system makes a copy of the variable to be passed to the function.
// Modifications made to a formal argument in the function do not alter the actual argument.
// To modify an argument in standard C, a pointer must be passed

// Argument passing - pass by reference
// one value and one reference
void f(int value, int &ref)
{
    value++; // no effect on the actual argument
    ref++;   // modifies the actual argument

    cout << value << endl; // outputs 2
    cout << ref << endl;   // outputs 6
}

int main()
{
    int cat = 1;
    int dog = 5;

    f(cat, dog); // pass cat by value, dog by ref

    cout << cat << endl; // outputs 1
    cout << dog << endl; // outputs 6

    return EXIT SUCCESS;
}