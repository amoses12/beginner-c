/*
- Find total number of lines in a text file
    - create a file that creates some lines of text
    - Open file fOpen()
    - fgetc() to parse characters until you get EOF
    - Display as output total number of lines
    - Close file
    - use fputc() ?
*/
#include <stdio.h>
#include <stdlib.h>

#define FILENAME "test.txt"
int main()
{
  FILE *fp = NULL;
  char c;
  int count = 0;

  fp = fopen(FILENAME, "r");

  if (!fp)
  {
    printf("Error opening file");
    return -1;
  }

  while ((c = fgetc(fp)) != EOF)
  {
    if (c == '\n')
    {
      count++;
    }
  }

  fclose(fp);
  fp = NULL;

  printf("There are %d lines in the file.\n", count);
  return 0;
}