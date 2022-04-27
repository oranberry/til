// 💫 String Variables
// Any one-dimensional array of characters can be used to store a string.
// A string variable can be initialized at the same time it’s declared:
char date1[8] = "June 14"; // The compiler will automatically add a null character at the end

// "June  14" is not a string literal in this context.
// Instead, C views it as an abbreviation for an array initializer.

// If a string variable needs to hold 80 characters, it must be declared to have length 81:
#define STR_LEN 80
char str[STR_LEN + 1];

// Adding 1 to the desired length allows room for the null character at the end of the string.
// Defining a macro that represents 80 and then adding 1 separately is a common practice.

// If the initializer is too short to fill the string variable, the compiler adds extra null characters:
char date2[9] = "June 14"; // J u m e   1 4 \0 \0

// An initializer for a string variable can’t be longer than the variable, but it can be the same length (bad practice)
// Failing to leave room for the null character may cause unpredictable results when the program is executed.
char date3[7] = "June 14"; // ❌❌

// The declaration of a string variable may omit its length, in which case the compiler computes it:
char date4[] = "June 14";

// The compiler sets aside eight characters for date4, enough to store the characters in "June 14" plus a null character.
// Omitting the length of a string variable is especially useful if the initializer is long, since computing the length by hand is error-prone.