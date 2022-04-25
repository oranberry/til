// 💫 Pointer Assignment
// C allows the use of the assignment operator to copy pointers, provided that they have the same type.

int i, j, *p, *q;

p = &i;

q = p; // This statement copies the contents of p ( the address of i) into q
// Both p and q point to i, so we can change i by assigning a new value to either *p or *q:
*p = 2;
*q = 2;

// Any number of pointer variables ay point to the same object

// 💥💥💥주의💥💥💥
// q = p; (pointer assignment)
// *q = *p; (Not pointer assignment! copies the value)
