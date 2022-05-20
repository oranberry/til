// 1. What are contests of string s1 after executing the following statements.
string s1 = "hello";
string s2 = "students";
s1 += s1 + s2{0} + s1;

// Answer: hellohelloshello

// 2. What (if anything) is different about the behavior of the following two functions f and g
// that increment a variable and print its value?
void f(int x)
{
    std::cout << ++x
}
void g(int &x)
{
    std::cout << ++x
}

// Answer: same

// 3. Consider the following attempt to allocate the 10-element array of pointers to doubles and initialize to 0.0.
// Rewrite the following incorrect code to correct one.
double *dp[10];
for (int i = 0; i < 10; i++)
{
    dp[i] = 0.0;
}

// Answer: need null