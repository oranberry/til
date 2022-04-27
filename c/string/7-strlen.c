// 💫 The strlen (String Length) Function

// Prototype for the strlen function:
size_t strlen(const char *s);

// size_t is a type defined in string.h that represents one of C’s unsigned integer types.
// strlen returns the length of a string s, not including the null character.

// Examples:
int len;
len = strlen("abc"); /* len is now 3 */
len = strlen("");    /* len is now 0 */