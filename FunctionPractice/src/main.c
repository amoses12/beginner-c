#include <stdio.h>

/*
1st function:
    - finds greatest common divisor of two non-negative integer values and
returns the result

2nd function
    - finds the absolute(positive) value of a number (x = -x). works with ints
or floats, takes in floats.

3rd function: find the square root of a number. Check parameters and return a -1
and display a message if an argument is negative
square root invokes the absolute value function.

*/

int gcd(int x, int y)
{
  int result;
  if (x < 0 || y < 0)
  {
    printf("Negative numbers not allowed");
    return -1;
  }
  for (int i = 1; i <= x && i <= y; i++)
  {
    if (x % i == 0 && y % i == 0)
    {
      result = i;
    }
  }
  return result;
}

float absValue(float x)
{
  float result;
  if (x < 0)
  {
    result = -x;
  }
  else
  {
    result = x;
  }
  return result;
}

float sqrRoot(int x)
{
  if (x < 0)
  {
    x = absValue(x);
  }
  float guess = 1.0;
  float accuracy = 0.001;
  while (absValue(guess * guess - x) >= accuracy)
  {
    guess = (x / guess + guess) / 2;
  }
  return guess;
}

int main()
{

  printf("The Square root of 9 is: %.2lf\n", sqrRoot(9));
  printf("The Absolute value of -2398472 is: %.2lf\n", absValue(-2398472));
  printf("The GCD of 24 and 36 is: %d\n", gcd(12, 24));
}