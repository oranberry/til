// 💫 Dynamically Allocated Arrays
// When we're writing a program, it's often difficult to estimate the proper size for an array;
// it would be more convenient to wait until the program is run to decide how large the array should be.

// The close relationship between arrays and pointers
// makes a dynamically allocated array as easy to use as an ordinary array.

// ✨ Using malloc to allocate storage for an array
// Suppose a program needs an array of n integers, where n is computed during program execution.
// We’ll first declare a pointer variable:
int *a;

// Once the value of n is known, the program can call malloc to allocate space for the array:
// Always use the sizeof operator to calculate the amount of space required for each element.
a = malloc(n * sizeof(int));

// 🔎 The sizeof Operator ❗️
// sizeof() tells you the size of variables and types, in bytes.
// sizeof(char) is always 1, but the sizes of the other types may vary.
// sizeof(int) is normally 4.

// We can now ignore the fact that a is a pointer and use it instead as an array name
// For example, we could use the following loop to initialize the array that a points to:
for (i = 0; i < n; i++)
    a[i] = 0;
// We also have the option of using pointer arithmetic
// instead of subscripting to access the elements of the array.
