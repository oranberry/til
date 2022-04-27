// 💫 Operations on Characters
// When a character appears in a computation, C uses its integer value.

// Consider the following examples, which assume the ASCII character set:
char ch;
int i;

i = 'a';     /* i is now 97   */
ch = 65;     /* ch is now 'A' */
ch = ch + 1; /* what is ch now? -> 'B' */

// What is the value of char variable ch after the following statements?
char ch = 'b';
ch = ch + 3; // 'e'

// Characters can be compared, just as numbers can.
// An if statement that converts a lower-case letter to upper case:
if (ch >= 'a' && ch <= 'z')
    ch = ch - 'a' + 'A';
//  Comparisons such as 'a' <= ch are done using the integer values of the characters involved.

// For example, write a for statement whose control variable steps through all the upper-case letters:
for (ch = 'A'; ch <= 'Z'; ch++)
    ...;
