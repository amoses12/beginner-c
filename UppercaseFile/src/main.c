/*
- Converts all characters of a file to uppercase.
    - Reads in file
    - Writes all characters in file to uppercase in temp file
    - Rename temp file to original file name
    - Remove original file
    - Print new uppercase contents of file
- Methods to use
    - fopen()
    - rename()
    - remove()
    - fclose()
    - fputc()
    - islower()
    - can convert from lowercase to uppercase by subtracting 32.
*/
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define FILENAME "original.txt"
#define TEMPFILENAME "temp.txt"

int main()
{
  FILE *fp = NULL;
  FILE *tmpfp = NULL;
  char c;

  fp = fopen(FILENAME, "r");

  if (!fp)
  {
    printf("Error opening file.");
    return -1;
  }

  tmpfp = fopen(TEMPFILENAME, "w");

  if (!tmpfp)
  {
    printf("Error writing to file.");
    return -1;
  }
  while ((c = fgetc(fp)) != EOF)
  {
    if (islower(c))
    {
      c = c - 32;
    }
    fputc(c, tmpfp);
  }

  fclose(fp);
  fclose(tmpfp);

  rename(TEMPFILENAME, FILENAME);
  remove(TEMPFILENAME);

  fp = fopen(FILENAME, "r");

  if (!fp)
  {
    printf("Error opening file.");
    return -1;
  }

  while ((c = fgetc(fp)) != EOF)
  {
    printf("%c", c);
  }
  printf("\n");

  fclose(fp);
  fp = NULL;
  tmpfp = NULL;

  return 0;
}