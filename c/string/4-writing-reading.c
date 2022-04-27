// 💫 Writing Strings Using printf and puts
// The %s conversion specification allows printf to write a string:
char str[] = "Are we having fun yet?";
printf("%s\n", str);

// The output will be Are we having fun yet?
// printf writes the characters in a string one by one until it encounters a null character.

// 💫 Reading Strings Using scanf
// The %s conversion specification allows scanf to read a string into a character array:
char str[20];
scanf("%s", str);
// str is treated as a pointer, so there’s ⚠️ no need to put the & operator ⚠️ in front of str.

// When scanf is called, it skips white space, then reads characters and stores them in str
// until it encounters a white-space character.
// scanf always stores a null character at the end of the string.

// As they read characters into an array, scanf has no way to detect when it’s full.
// Consequently, it may store characters past the end of the array, causing undefined behavior.
// scanf can be made safer by using the conversion specification 💥 %ns 💥 instead of %s.
// n is an integer indicating the maximum number of characters to be stored.
scanf("%20s", str);

// Consider the following program fragment:
// SENT_LEN is 20
char sentence[SENT_LEN + 1];
printf("Enter a sentence:\n");
scanf("%s", sentence);

// Enter a sentence: ___To C, or not to C: that is the question.
// scanf will store the string "To" in sentence.
// ⚡️ Because it skips white space, then reads characters and stores them in str until it encounters a white-space character.

// 💥 scanf won’t usually read a full line of input.💥
// A new-line character will cause scanf to stop reading, but so will a space or tab character.

// To read an entire line of input, we have the following options:
// gets function: unsafe, no way to detect when the array is full
// ✨ Write our own input functions: Reading Strings Character by Character

// Suppose we need a function that (1) doesn’t skip
// white-space characters, (2) stops reading at the first new-line character (which isn’t stored in the string),
// and (3) discards extra characters if the input line contains more than n characters.
int read_line(char str[], int n);

// read_line will return the number of characters it stores in str.
// read_line consists primarily of a loop that calls getchar to read a character
// and then stores the character in str, provided that there’s room left:
int read_line(char str[], int n)
{
    int ch, i = 0;
    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    str[i] = '\0'; /* terminates string */
    return i;      /* number of characters stored */
}
// ch has int type rather than char type because getchar returns an int value.

// read_line, pointer version
int read_line(char *str, int n)
{
    int ch, i = 0;
    while ((ch = getchar()) != '\n')
    {
        if (i < n)
        {
            *str++ = ch;
            i++;
        }
    }
    *str = '\0'; /* terminates string */
    return i;    /* number of characters stored */
}