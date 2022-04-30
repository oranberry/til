# Pointers to Functions 함수 포인터

C doesn't require that pointers point only to data; it's also possible to have pointers to functions. Functions occupy memory locations, so every function has a memory address, just as each variable has an address.

We can use function pointers in much the same way we use pointers to data. Passing a function pointer as an argument is fairly common in C.

When passing a function pointer as an argument, function pointer must be declared. Declaration tells the compiler:

- Return type
- Number of parameters
- Type of each parameter

Function calls using a function pointer must have the right number of arguments and right types. The declaration specifies the return type and the types of the arguments.

`int (*pFunction) (double)`

- will point to functions that return an int
- the name of the function pointer variable will be pFunction
- will point to functions that have one parameter of type double
