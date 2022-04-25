// 💫 Declaring Pointer Variables
// only difference of the name of a pointer variable must be preceded by an asterisk(*)
int *p;

// pointer variables can appear in declarations along with other variables:
int i, j, a[10], b[20], *p, *q;

// To avoid confusion, use separate lines for pointer variables:
int i, j;
int *p;
int *q;

// every pointer variable point only to objects of a particular type (the referenced type):
// There are no restrictions on what the referenced type may be.
int *p;    // capable of points only to integers
double *q; // capable of points only to double
char *r;   // capable of points only to characters
