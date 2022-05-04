// 💫 The Indirection Operator (*)
// To gain access to the object that a pointer points to, we use the * (indirection) operator.
// If p is a pointer, the *p represents the object to which p currently points.

// If p point to i, we can pring the value of i as follows:
printf("%d\n", *p);

// Applying & to a variable produces a pointer to the variable;
// applying * to the pointer takes us back to the original variable:
j = *&i; // same as j = i;

// If p points to i, *p is an alias for i.
// 1. *p have the same value as i
// 2. changing the value of *p changes the value of i.
int i;
int *p;
p = &i;

i = 1;
printf("%d\n", i);  // 1
printf("%d\n", *p); // 1

*p = 2;
printf("%d\n", i);  // 2
printf("%d\n", *p); // 2
