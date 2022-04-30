// The qsort Function: Sort an array of strings
// To sort an array of strings using qsort, can we pass strcmp itself to qsort?

char *words[MAX_WORDS];
…;
qsort(words, num_words, sizeof(char *), strcmp); /*Wrong*/

// We can’t pass strcmp itself to qsort:
// qsort requires a comparison function with two const void * parameters.

int (*compar)(const void *, const void *);

// Prototype for the strcmp function:
int strcmp(const char *s1, const char *s2);

// strcmp assumes s1 and s2 are strings (char * pointers).
// strcmp compares the strings s1 and s2, returning a value less than, equal to, or greater than 0.

// Need to cast parameters of comparison function (const void *) to type char** - pointers to strings
// Then use * (indirection) operater to access the strings.
// Then use strcmp to compare strings in the comparison function for qsort:
int compare_strings(const void *p, const void *q)
{
    return strcmp(*(char **)p, *(char **)q);
}
