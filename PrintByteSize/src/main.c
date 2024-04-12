#include <stdio.h>

/*
PRINT SIZES OF:
int
char
long
long long
double
long double

%zd type specifier
*/

int main()
{
  printf("The size of an int is: %zd\n", sizeof(int));
  printf("The size of a char is: %zd\n", sizeof(char));
  printf("The size of a long is: %zd\n", sizeof(long));
  printf("the size of a long long is: %zd\n", sizeof(long long));
  printf("The size of a double is: %zd\n", sizeof(long double));
  printf("The size of a long double is: %zd\n", sizeof(long double));

  return 0;
}