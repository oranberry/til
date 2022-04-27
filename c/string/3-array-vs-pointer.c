// 💫 Character Arrays versus Character Pointers
// The declaration
char date[] = "June 14";
// declares date to be an array,

// The similar-looking
char *date = "June 14";
// declares date to be a pointer.

// In the array version, the characters stored in date can be modified.
// In the pointer version, date points to a string literal that shouldn’t be modified.

// quiz
// Which of the following statements is NOT legal?

A) char ch[] = "cd";
B) char *ch = "ab";
C) char ch = 89;
D) char *ch = 'x';