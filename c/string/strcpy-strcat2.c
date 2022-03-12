#include <stdio.h>
#include <string.h>
int main()
{
  char str1[20]="String";
  char str2[20]="Library";

  if(strcmp(str1, str2) < 0){
    strcat(str1, str2);
    printf("The value of string: %s\n", str1);
  }
  else{
    strcat(str2, str1);
    printf("The value of string: %s\n", str2);
  }
  return 0;
}