#include <stdio.h>

int main()
{
  int primes[100] = {2, 3};
  int count = 100;
  int primesIndex = 2;

  for (int i = 5; i < 100; i++)
  {
    
    if (i % 2 == 0)
    {
      continue;
    }
    for (int j = 0; j < sizeof(primes) / sizeof(primes[0]); j++)
    {
      if (i % primes[j] == 0)
      {
        break;
      }
      else if (j == sizeof(primes) / sizeof(primes[0]) - 1)
      {
        primes[primesIndex] = i;
      }
    }
    primesIndex++;
  }

  for (int i = 0; i < sizeof(primes) / sizeof(primes[0]); i++)
  {
    if (primes[i] != 0)
    {
      printf("%d, ", primes[i]);
    }
  }

  return 0;
}