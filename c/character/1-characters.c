// 💫 char (character type)
// Today’s most popular character set is ASCII (American Standard Code for Information Interchange)
// The character 'a' has the value 97, 'A' has the value 65,
// '0' has the value 48, and ' ' has the value 32.
// English letters (upper) 65 - 90
// English letters (lower) 97 - 122
// digits 0-9 (문자) 48 - 57

// C treats characters as small integers.
// Character constants actually have int type rather than char type
char ch1 = 'A';
char ch2 = 't';
char ch3 = ' ';
char ch4 = '\n';

// The %c conversion specification allows scanf and printf to read and write single characters:
char ch;
scanf("%c", &ch); /* reads one character */
printf("%c", ch); /* writes one character */

// scanf doesn’t skip white-space characters when reading characters.
char ch = ' '; // ch is 32