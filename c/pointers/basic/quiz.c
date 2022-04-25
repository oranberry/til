// i is int and p and q are pointers to int,
// which assignment is illegal?
int i;
int *p;
int *q;

p = &i;  // legal
p = *&q; // legal. p = q
p = i;   // illegal