// 💫 Using the C String Library
// In particular, they can’t be copied or compared using operators.
// The C library provides a rich set of functions for performing operations on strings.
// Programs that need string operations should contain the following line:
#include <string.h>

// Compare strings
// ✨ strcmp

// Length of a string
// ✨ strlen

// Copy strings
// ✨ strcpy
// ✨ strcat

// Search and tokenize strings
// ✨ strstr
// ✨ strtok

// Direct attempts to copy or compare strings will fail.
// Copying a string into a character array using the = operator is not possible:
char str1[10] = "abc";
char str2[10] = "def";
// Using an array name as the left operand of = is illegal
str2 = str1; /*** WRONG ***/

// Attempting to compare strings using a relational or equality operator is legal but won’t produce the desired result:
if (str1 == str2) /*** WRONG ***/

// str1 and str2 are compared as pointers.
// Since str1 and str2 have different addresses, the expression str1 == str2 must have the value 0.