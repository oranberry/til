// 💫 The strcpy (String Copy) Function
// Prototype for the strcpy function:
char *strcpy(char *s1, const char *s2);

// strcpy copies the string pointed to by s2 into the array pointed to by s1.
// strcpy returns s1 (a pointer to the destination string).
strcpy(str2, "abcd"); /* str2 now contains "abcd" */
strcpy(str1, str2);   /* str1 now contains "abcd" */

// 💫 The strcat (String Concatenation) Function
// Prototype for the strcat function:
char *strcat(char *s1, const char *s2);

// strcat appends the contents of the string s2 to the end of the string s1.
// It returns s1 (a pointer to the resulting string).

// strcat examples:
strcpy(str1, "abc");
strcpy(str2, "def");
strcat(str1, str2); /* str1 now contains "abcdef" */

// Exercise
// What will be the value of string s1 after the following statements have been executed?
strcpy(s1, “String”);
strcpy(s2, “Library”);
if (strcmp(s1, s2) < 0)
    strcat(s1, s2);
else
    strcat(s2, s1);