// Write a program that reads a word, character by character, using an array of 26 integers to keep
// track of how many times each letter has been seen. Assume the letter are lower case.

// For example, after the word smartest  has been read, the array should contain the values 10001000000010000122000000,
// reflecting the fact that smartest contains one a, one e, one m, one r, two s’s and two t’s.

// Modify the program so that tests whether two words are anagrams (permutations of the same letters):
// Enter first word: smartest
// Enter second word: mattress
// The words are anagrams.

// Use another loop to read the second word, except this time decrementing the corresponding array element as each letter is read.
// After the second word has been read, use another loop to check whether all the elements in the array are zero.
// If so, the words are anagrams.

#include <stdio.h>
#define N 26

int main()
{

	char ch;
	int letter_counts[N] = {0};
	int i;
	int count = 0;

	printf("enter a word: ");

	while ((ch = getchar()) != '\n')

	{
		letter_counts[ch - 'a']++;
	}

	for (i = 0; i < N; i++)
		printf("%d", letter_counts[i]);

	printf("enter the second word: ");
	while ((ch = getchar()) != '\n')

	{
		letter_counts[ch - 'a']--;
	}

	for (i = 0; i < N; i++)
		printf("%d", letter_counts[i]);

	for (i = 0; i < N; i++)
		if (letter_counts[i] == 0)
			count++;

	if (count == N)
		printf("The words are anagrams.\n");
	else

		printf("The words are NOT anagrams.\n");

	return 0;
}
