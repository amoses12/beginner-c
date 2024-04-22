/*
INPUT: limit. string (scanf, gets)
OUTPUT: prints string
REQUIREMENTS:
    - No char pointer only (no char arrays)
    -
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
  int charCount;
  int limit;
  char *str = NULL;

  printf("Enter a max number of characters you'd like to enter:\n");
  scanf("%d", &charCount);
  fflush(stdin);
  limit = charCount * sizeof(char);
  str = (char *)malloc(limit);

  printf("Enter your message:\n");
  fgets(str, limit, stdin);

  printf("%s", str);
  free(str);
  return 0;
}
