/* Program inputs two numbers x and y and outputs their sum */

#include <cstdlib>  // provides some standard system definition
#include <iostream> // provides definitions needed for IO

int main()
{
    int x, y;

    std::cout << "Please enter two numbers: ";
    std::cin >> x >> y; // input x and y

    int sum = x + y; // compute their sum

    std::cout << "Their sum is " << sum << std::endl;

    return EXIT SUCCESS; // terminate successfully
}