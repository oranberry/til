#include <stdio.h>
#include <string.h>
int main()
{
  char str1[10]="hello";
  char str2[10]="hello";

  char str3[20];
  strcpy(str3, str1);
  strcat(str3, " there");
  printf("str3 is: %s\n", str3);
  return 0;
}