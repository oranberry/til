// 💫 String
// Strings are not a type in C
// Strings are arrays of characters in which a special character — the null character — marks the end.
// The C library provides a collection of functions for working with strings.

// Two types of strings:
// String constants (or literals, as they’re called in the C standard)
// String variables

// 1️⃣ String Constants (Literals)
// A string literal is a sequence of characters enclosed within double quotes:
"When you come to a fork in the road, take it.";

// When a string literal is too long:
// The backslash character (\) can be used to continue a string literal from one line to the next:
printf("When you come to a fork in the road, take it.  \
--Yogi Berra");

// When two or more string literals are adjacent, the compiler will join them into a single string.
printf("When you come to a fork in the road, take it.  "
       "--Yogi Berra");

// How string literals are stored
// When a C compiler encounters a string literal of length n in a program, it sets aside ✨n + 1 bytes✨ of memory for the string.
// For example, the string literal "abc" is stored as an array of four characters:
// This memory will contain the characters in the string, plus one extra character—the null character—to mark the end of the string.

// Since a string literal is stored as an array, the compiler treats it as a pointer of type char *.
// We can use a string literal wherever C allows a char * pointer:
char *p;
p = "abc";
// This assignment makes p point to the first character of the string.

// ⚡️ The null character
// The null character is a character with value zero. (a byte whose bits are all zero)
// The null character has special significance in C and its derivatives: it servers as a reserved character used to mark the end of strings
// The null character: '\0'
// The null string (empty string) "" is stored as a single null character

// The NULL pointer (a macro definition in stdio.h) - A pointer that points to nothing.
// int *p = NULL;

// 💥 주의 💥
// A string literal (constant) should not be modified.
// Attempting to modify a string literal causes undefined behavior:
char *p = "abc";
*p = 'd'; /*** WRONG ***/

// A program that tries to change a string literal may crash or behave erratically.