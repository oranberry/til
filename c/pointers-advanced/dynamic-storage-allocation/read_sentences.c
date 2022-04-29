// Example: Read a sentence
// Read a sentence from the keyboard using a large input buffer and allocate memory to hold the sentence
// just large enough to hold what was entered. Copy the sentence into the dynamically allocated memory block.

// Modify the reading a sentence example so that it reads in a series of sentences entered by the user and display them in sorted order.
// Assume there are no more than 50 sentences. Stop reading when the user enters an empty word
// Hint: use length variable to determine whether a string is an empty word.

// Allocate memory for each sentence.
// Store all the sentencees in an array of strings (provided as variable sentences)
// After all the sentences have been read, print them in order after sorting them with qsort function
// Use free function to release the block of memeory that were allocated to the sentences before the program terminates

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int read_line(char str[], int n);
int compare_strings(const void *p, const void *q);

int main()
{
  char input_buffer[1001];
  int length = 0;
  // char *sentence = NULL;

  char *sentences[50];
  int i, num_sentences = 0;

  for (;;)
  {
    printf("Please type a sentence: ");
    read_line(input_buffer, 1000);

    length = strlen(input_buffer);

    if (length == 0)
      break;

    printf("Allocating %d bytes to hold the sentence\n\n", length + 1);

    sentences[num_sentences] = malloc(length + 1);
    if (sentences[num_sentences] == NULL)
    {
      printf("malloc failed");
      return 1;
    }

    //  sentence[num_words] = input_buffer;
    strcpy(sentences[num_sentences], input_buffer);

    num_sentences++;

    if (num_sentences == 50)
      break;
  }

  qsort(sentences, num_sentences, sizeof(char *), compare_strings);
  for (i = 0; i < num_sentences; i++)
    printf("%s\n", sentences[i]);

  printf("deallocating memory");
  for (i = 0; i < num_sentences; i++)
    free(sentences[i]);

  return 0;
}
int read_line(char str[], int n)
{
  int ch, i = 0;

  while ((ch = getchar()) != '\n')
  {
    if (i < n)
      str[i++] = ch;
  }
  str[i] = '\0';
  return i;
}

int compare_strings(const void *p, const void *q)
{
  return strcmp(*(char **)p, *(char **)q);
}
