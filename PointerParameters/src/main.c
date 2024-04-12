#include <stdio.h>

/*
    - Function that squares a number
    - takes in int pointer

*/
void square(int*);
int main()
{
  int x;
  printf("Enter a number to square:\n");
  scanf("%d", &x);
  square(&x);
  printf("%d\n", x);
}

void square(int* x) 
{
  *x = (*x) * (*x);
}