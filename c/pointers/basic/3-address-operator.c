// 💫 The Address Operator (&)
// To find the address of a variable, we use the & (address) operator.
// if x is a variable, then &x is the address of x in memory.

int *p; // points nowhere in particular

// ✨ It's crucial to initialize p before we use it. ✨
int i, *p;
p = &i;

// by Assigning the address of i to the variable p, tihs statement makes p point to i.
// It's also possible to initialize a pointer variable at the time we declare it:
int i;
int *p = &i;

int i, *p = &i;
