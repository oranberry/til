#include <cstdlib>
#include <iostream>

using namespace std; // makes std avialable

/* Program inputs two numbers x and y and outputs their sum */

int main()
{
    int x, y;

    cout << "Please enter two numbers: ";
    cin >> x >> y; // input x and y

    int sum = x + y; // compute their sum

    cout << "Their sum is " << sum << endl;

    return EXIT SUCCESS; // terminate successfully
}
