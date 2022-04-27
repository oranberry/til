#include <stdio.h>
#include <string.h>
int main()
{
  char str1[10] = "hello";
  char str2[10] = "hello";

  if (strcmp(str1, str2) == 0)
    printf("str1 and str2 contain the same set of characters\n");

  return 0;
}