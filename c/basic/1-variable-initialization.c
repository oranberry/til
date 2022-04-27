// 💫 Variable Initialization
// A variable that doesn’t have a default value
// and hasn’t yet been assigned a value by the program is said to be uninitialized.
// Attempting to access the value of an uninitialized variable may yield an unpredictable result.

// The initial value of a variable may be included in its declaration:
int height = 8;

// Any number of variables can be initialized in the same declaration:
int height = 8, length = 12, width = 10;

// 💥 주의 💥
// Each variable requires its own initializer.
int height, length, width = 10; // initializes only width !