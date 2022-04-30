// scanf vs. fscanf

scanf("%d%d", &i, &j); /* reads from stdin */

FILE *fp = fopen("foo.txt", "r");
fscanf(fp, "%d%d", &i, &j); /* reads from fp */

// Detecting End-of-File and Error Conditions
// If we ask a fscanf function to read and store n data items,
// we expect its return value to be n.

// If the return value is less than n, something went wrong:
// - End-of-file. The function encountered end-of-file before matching the format string completely.
// - Read error. The function was unable to read characters from the stream.
// - Matching failure. A data item was in the wrong format

// Every stream has two indicators associated with it:
// an error indicator and an end-of-file indicator.

// The feof and ferror functions can be used to test a stream’s indicators
// to determine why a prior operation on the stream failed.

// fscanf (scanf) conversion specifier: [
// The [ specifier is a more complicated (and more flexible) version of the s specifier.

// A conversion specification using [ has the form %[set] or %[^set], where set can be any set of characters.
// %[set] matches any sequence of characters in set
// %[^set] matches any sequence of characters not in set.

// Examples
// %[abc] matches any string containing only a, b, and c.
// %[^abc] matches any string that doesn’t contain a, b, or c.

fscanf(fp, "%[^\n]\n", str);
// matches (read) any character that’s not newline character until a new line character is encountered.

fscanf(fp, "%[^,],", str);
// matches(read) any character that’s not comma character until a comma character is encountered