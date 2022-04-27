// 💫 The strcmp (String Comparison) Function
// Prototype for the strcmp function:
int strcmp(const char *s1, const char *s2);

// strcmp compares the strings s1 and s2, returning a value less than, equal to, or greater than 0.
// To test whether str1 and str2 contain the same characters:
if (strcmp(str1, str2) == 0)
    ...;

// As it compares two strings, strcmp looks at the numerical codes for the characters in the strings.

// Some knowledge of the underlying character set is helpful to predict what strcmp will do.

// Important properties of ASCII:
// A–Z, a–z, and 0–9 have consecutive codes.
// All upper-case letters are less than all lower-case letters.
// Digits are less than letters.
// Spaces are less than all printing characters.

// strcmp considers s1 to be less than s2 if either one of the following conditions is satisfied:
// The first i characters of s1 and s2 match, but the (i+1)st character of s1 is less than the (i+1)st character of s2.
// For example, s1: "back", s2: "bag"
// All characters of s1 match s2, but s1 is shorter than s2.  For example, s1: "be", s2: "bee"

// quiz
// Is strcmp("he", "hi")< 0 or >0?
// Is strcmp("hello", "Hi")< 0 or >0?
// Is strcmp("he", "hello")< 0 or >0?
// Is strcmp(“8h", "hello")< 0 or >0?