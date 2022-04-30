// 💫 Function Pointers as Arguments

// 함수의 주소 값을 저장할 수 있는 포인터를 선언해야 한다.
// 데이터를 가리키는 포인터가 자신이 가리킬 대상의 크기를 명시하듯이 함수 포인터는 함수 원형을 사용해서 포인터를 선언한다.

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
// When a function name isn’t followed by parentheses, the C compiler produces a pointer to the function.

// Within the body of integrate, we can call the function that f points to :
y = (*f)(x);
// *f represents the function that f points to;
// x is the argument to the call.
// Thus, during the execution of integrate(sin, 0.0, PI / 2), each call of *f is actually a call of sin.

// Writing f(x) instead of (*f)(x) is allowed.
