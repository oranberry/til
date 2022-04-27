#include <stdio.h>

#define STR_LEN 10
int read_line(char *str, int n);
int read_line2(char *str, int n);

int main()
{
   int num_chars;
   char sen[STR_LEN + 1];
   printf("enter a sentence: ");
   num_chars = read_line2(sen, STR_LEN);
   printf("you entered: %s, it has %d characters", sen, num_chars);
   return 0;
}

int read_line(char *str, int n)
{
   int ch;
   int i = 0;

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

/*read_line2 skips the white space(s) before beginning to store input characters*/
int read_line2(char *str, int n)
{
   int ch, i = 0;
   while ((ch = getchar()) == ' ')
      ;
   *str++ = ch;
   i++;
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
