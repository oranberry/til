// ๐ซ Function Pointers as Arguments

// ํจ์์ ์ฃผ์ ๊ฐ์ ์ ์ฅํ  ์ ์๋ ํฌ์ธํฐ๋ฅผ ์ ์ธํด์ผ ํ๋ค.
// ๋ฐ์ดํฐ๋ฅผ ๊ฐ๋ฆฌํค๋ ํฌ์ธํฐ๊ฐ ์์ ์ด ๊ฐ๋ฆฌํฌ ๋์์ ํฌ๊ธฐ๋ฅผ ๋ช์ํ๋ฏ์ด ํจ์ ํฌ์ธํฐ๋ ํจ์ ์ํ์ ์ฌ์ฉํด์ ํฌ์ธํฐ๋ฅผ ์ ์ธํ๋ค.

// A function named integrate that integrates a mathematical function f
// can be made as general as possible by passing f as an argument.

// Prototype for integrate:
double integrate(double (*f)(double), double a, double b);
// The parentheses around *f indicate that f is a pointer to a function. (not a function that returns a pointer)

// An alternative prototype:
double integrate(double f(double), double a, double b);

// A call of integrate that integrates the sin (sine) function from 0 to p/2:
result = integrate(sin, 0.0, PI / 2);
// Notice that there are no parentheses after sin.
// When a function name isnโt followed by parentheses, the C compiler produces a pointer to the function.

// Within the body of integrate, we can call the function that f points to :
y = (*f)(x);
// *f represents the function that f points to;
// x is the argument to the call.
// Thus, during the execution of integrate(sin, 0.0, PI / 2), each call of *f is actually a call of sin.

// Writing f(x) instead of (*f)(x) is allowed.
