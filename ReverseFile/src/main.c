/*
-

METHODS:
    - fseek()
        - seek to end of the file
    - ftell()
        get the position of the file pointer after fseek();
*/

#include <stdio.h>
#include <stdlib.h>

#define FILENAME "reverse.txt"

int main()
{
  FILE *fp = NULL;
  int pos;

  fp = fopen(FILENAME, "r");

  if (!fp)
  {
    printf("Error opening file");
    return -1;
  }

  fseek(fp, -1, SEEK_END);
  pos = ftell(fp);

  while (pos >= 0)
  {
    printf("%c", fgetc(fp));
    pos--;
    fseek(fp, pos, SEEK_SET);
  }

  printf("\n");
  fclose(fp);
  fp = NULL;

  return 0;
}