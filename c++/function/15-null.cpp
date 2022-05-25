// 💫 Null Pointer
// It is useful to have a pointer value that points to nothing, that is, a null pointer.
// By convention, such a pointer is assigned the value zero.
// All C++ implementations define a special symbol NULL, which is equal to zero.
// This definition is activated by inserting the statement #include <cstdlib> in the beginning of a program file.

// nullptr denotes the pointer literal (C++ 11)
// Implicit conversions from nullptr to null pointer value of any pointer type and any pointer to member type
// NULL (0 from C) could cause ambiguity

#include <cstddef>
#include <iostream>

template <class F, class A>

void Fwd(F f, A a)
{
    f(a);
}

void g(int *i)
{
    std::cout << "Function g called\n";
}

int main()
{
    g(NULL); // Fine
    g(0);    // Fine

    Fwd(g, nullptr); // Fine
    // Fwd(g, NULL);      // ERROR: No function g(int)
}