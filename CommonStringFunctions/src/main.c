#include <stdbool.h>
#include <stdio.h>
#include <string.h>

/*
Input: string from keyboard
Output: reverse string;
use strlen
*/

/*
Bubble sort that uses strcmp and strcpy functions to sort strings;
*/

int reverseString()
{
  char str[50];
  int j = 0;
  printf("Enter a string under 50 characters:\n");
  scanf("%s", str);
  int len = strlen(str);
  for (int i = 0, j = len - 1; i <= j; i++, j--)
  {
    char c = str[i];
    str[i] = str[j];
    str[j] = c;
  }
  printf("Reversed: %s\n", str);
  return 0;
}

int sortString()
{
  char input[10][12] = {"Zebra",   "Dog",   "Austin", "Auspicious", "Cat",
                        "Ostrich", "Fjord", "Hello",  "Rats",       "Mountain"};
  int i, j;
  int n = sizeof(input) / sizeof(input[0]);
  char temp[12] = "";
  bool swapped;

  for (i = 0; i < n - 1; i++)
  {
    swapped = false;
    for (j = 0; j < n - i - 1; j++)
    {
      if (strcmp(input[j], input[j + 1]) > 0)
      {
        strcpy(temp, input[j]);
        strcpy(input[j], input[j + 1]);
        strcpy(input[j + 1], temp);
        swapped = true;
      }
    }

    if (swapped == false)
    {
      break;
    }
  }

  for (i = 0; i < n; i++)
  {
    printf("%s\n", input[i]);
  }

  return 0;
}

int main()
{
  //   reverseString();
  sortString();
  return 0;
}