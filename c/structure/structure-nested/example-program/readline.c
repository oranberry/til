/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* readline.c (Chapter 16, page 395) */

#include <ctype.h>
#include <stdio.h>
#include "readline.h"

int read_line(char str[], int n)
{
  int ch, i = 0;

  // isspace function checks whether the passed character is white-space
  // standard white-space characters are: ' ', '\n', '\t', '\r', '\f', '\v'
  while (isspace(ch = getchar()))
    ;
  str[i++] = ch;
  while ((ch = getchar()) != '\n')
  {
    if (i < n)
      str[i++] = ch;
    // ch = getchar();
  }
  str[i] = '\0';
  return i;
}
