#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/*
- Creates an integer with hard coded value
- Create pointer, initialize to null
- Assign the address of the int to our pointer
- Display:
    - pointer address
    - pointer value (int address);
    - value of what pointer is pointing to
*/

int main()
{
  int x = 10;
  int* px = NULL;

  px = &x;

  printf("The pointers address is: %p\n", (void*)&px);
  printf("The pointers value is: %p\n", px);
  printf("The value that the pointer is pointing to is: %i \n", *px);
  return 0;
}
