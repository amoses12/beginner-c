#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  time_t t;
  srand((unsigned)time(&t));
  int guess;
  int answer = rand() % 21;

  printf(
      "I have selected a number between 1 and 20. You have five tries to "
      "guess!\n");

  for (int i = 5; i >= 1; i--)
  {
    printf("%d\n", answer);
    printf("You have %d tries left\n", i);
    printf("Enter your guess: \n");
    scanf("%d", &guess);
    if (guess > 20 || guess < 1)
    {
      while (guess > 20 || guess < 1)
      {
        printf(
            "Invalid guess. Please enter a valid number between 1 and 20:\n");
        scanf("%d", &guess);
      }
    }
    else if (guess < answer && i > 1)
    {
      printf("Your answer is too low!\n");
    }
    else if (guess > answer && i > 1)
    {
      printf(
          "Your answer is too high!\n");
    }
    else if (guess == answer)
    {
      printf("You win! The answer was %d\n", answer);
      break;
    }
    else if (guess != answer && i == 1)
    {
      printf("THE ANSWER WAS %d YOU IDIOT!\n", answer);
    }
  }

  return 0;
}