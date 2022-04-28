// 💫 Array Subscripting
// To access an array element, write the array name followed by an integer value in square brackets.
// The elements of an array of length n are indexed from 0 to n – 1.
// If a is an array of length 10, its elements are designated by a[0], a[1], ..., a[9]

// Examples of typical operations on an array a of length N:
for (i = 0; i < N; i++)
    scanf("%d", &a[i]); /* reads data into a */

for (i = 0; i < N; i++)
    sum += a[i]; /* sums the elements of a */

// C doesn’t require that subscript bounds be checked;
// if a subscript goes out of range, the program’s behavior is undefined.

// ⚠️ A common mistake ⚠️
int a[10], i;
// forgetting that an array with n elements is indexed from 0 to n – 1, not 1 to n
for (i = 1; i <= 10; i++) // ❌
    a[i] = 0;