// This program inputs two numbers x and y and outputs their sum

// Two header files
#include <cstdlib>  // provides some standard system definition
#include <iostream> // provides definitions needed for IO

// using namespace std; 사용하면 std:: 생략하고 작성할 수 있다.

int main()
{
    int x, y;

    // The operators ">>" and "<<" are used for input and output, respectively
    std::cout << "Please enter two numbers: ";
    std::cin >> x >> y; // input x and y

    int sum = x + y; // compute their sum
    std::cout << "Their sum is " << sum << std::endl;

    return EXIT_SUCCESS; // terminate successfully
    // The function main returns the value zero to indicate success
    // returns a nonzero value to indicate failure.
    // The include file cstdlib defines the constant EXIT_SUCCESS to be 0.
    // Thus, the return EXIT_SUCCESS statement means return 0, indicating  successful termination.
}