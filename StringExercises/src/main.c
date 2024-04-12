#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
FUNCTION 1:
find the length of a character array (string)
    - input: character array (string);
    - output: length of string

FUNCTION 2:
concatenate two character arrays (strings) into the result array
    - input:
        - char result[]
        - const char str1[]
        - const char str2[]
    output: void

FUNCTION 3:
compare 2 strings to see if they are equal;
    - input:
        - const char str1[]
        - const char str2[]
    - output:
        - boolean
*/

int strLength(const char[]);
void concat(char[], const char[], const char[]);
bool equals(const char[], const char[]);

int main()
{
  const char str1[] = "Hello";
  const char str2[] = "World!";
  const char str3[] = "Hello";
  char concatResult[100];

  concat(concatResult, str1, str2);

  printf("Length of Hello is: %d\n", strLength(str1));
  concat(concatResult, str1, str2);
  printf("%s\n", concatResult);
  printf("%d\n", equals(str1, str2));
  printf("%d\n", equals(str1, str3));
  return 0;
}

int strLength(const char str[])
{
  int count = 0;
  for (int i = 0; i < 100; i++)
  {
    if (str[i] != '\0')
    {
      count++;
    }
    else
    {
      break;
    }
  }

  return count;
}

void concat(char result[], const char str1[], const char str2[])
{
  int i, j;
  for (i = 0; i < strLength(str1); i++)
  {
    result[i] = str1[i];
  }
  for (j = 0; j < strLength(str2); j++)
  {
    result[i + j] = str2[j];
  }
  result[i + j] = '\0';
}

_Bool equals(const char str1[], const char str2[])
{
  if (strLength(str1) != strLength(str2))
  {
    return 0;
  }
  for (int i = 0; i < strLength(str1); i++)
  {
    if (str1[i] != str2[i])
    {
      return false;
    }
  }
  return true;
}