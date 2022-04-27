// 💫 Array Initialization
// An array, like any other variable, can be given an initial value at the time it’s declared.
// The values are undefined if an array has not been initialized.

// The most common form of array initializer is a list of constant expressions enclosed in braces and separated by commas:
int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

// Initialize an array to all zeros:
int a[10] = {0}; /* initial value of a is {0, 0, 0, 0, 0, 0, 0, 0, 0, 0} */

// If the initializer is shorter than the array, the remaining elements of the array are given the value 0:
int a[10] = {1, 2, 3, 4, 5, 6}; /* initial value of a is {1, 2, 3, 4, 5, 6, 0, 0, 0, 0} */

// If an initializer is present, the length of the array may be omitted:
// The compiler uses the length of the initializer to determine how long the array is.
int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};