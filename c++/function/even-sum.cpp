#include <iostream>
using namespace std;

// function declaration
bool evenSum(int a[], int n);

int main()
{
    int list[] = {4, 2, 7, 8, 5, 1};
    bool result = evenSum(list, 6); // invoke the function

    if (result)
        cout << "The sum is even\n";
    else
        cout << "The sum is odd\n";

    return 0;
}

// function definition
bool evenSum(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++) // sum the array elements
        sum += a[i];
    return (sum % 2) == 0; // returns true if sum is even
}