#include <stdio.h>

/*
Function that calculates the length of a string

INPUT:
    - const char pointer

OUTPUT:
    - int length of string

REQUIREMENTS:
    - pointer arithmetic only
    - must use a while loop
        - use value of the pointer to exit
    - should subtract 2 pointers
        - one at the end of the string
        - one at the beginning of the string

*/
int strLength(const char *str);

int main()
{
  char string[] = "Hello World!";

  printf("%d\n", strLength(string));
  return 0;
}

int strLength(const char *str)
{
  const char *end = str;
  while (*end)
  {
    ++end;
  };
  return end - str;
}