#include <stdio.h>
#include <stdlib.h>

#define MONTHS 12
#define YEARS 5

/*
INPUT:
- 2D array (hard coded) for rainfall amounts for the past 5 years
    - 5 rows (years)
    - 12 columns (months)
    - Rainfall amounts are floats

OUTPUT:
- total rainfall for each year
- average yearly rainfall
- average rainfall for each month
*/

int main()
{
  int year = 0, month = 0;
  float subtot = 0.0, total = 0.0;
  float rainfall[YEARS][MONTHS] = {
      {32.9, 44.8, 33.6, 12.4, 83.4, 23.5, 65.7, 43.1, 41.5, 68.1, 69.3, 29.8},
      {78.2, 45.1, 32.7, 18.4, 20.9, 29.4, 19.0, 38.5, 42.7, 73.1, 75.3, 56.2},
      {63.4, 75.2, 35.4, 65.3, 52.7, 84.6, 54.3, 43.5, 27.5, 29.0, 50.3, 54.0},
      {42.1, 35.9, 42.7, 61.4, 50.9, 41.2, 37.6, 32.5, 30.7, 33.3, 40.1, 21.3},
      {32.7, 33.6, 41.7, 42.1, 36.8, 29.0, 27.5, 23.1, 31.7, 40.8, 21.6, 12.9},
  };

  char months[12][10] = {"January",   "February", "March",    "April",
                         "May",       "June",     "July",     "August",
                         "September", "October",  "November", "December"};

  printf("Yearly Rainfall:\n");
  for (year = 0, total = 0; year < YEARS; year++)
  {
    for (month = 0, subtot = 0; month < MONTHS; month++)
    {
      subtot += rainfall[year][month];
    }
    printf("%d: %lf\n", 2010 + year, subtot);
    total += subtot;
  }

  printf("\nAverage Monthly Rainfall:\n");
  for (month = 0; month < MONTHS; month++)
  {
    for (year = 0, subtot = 0; year < YEARS; year++)
    {
      subtot += rainfall[year][month];
    }
    printf("%s: %lf\n", months[month], subtot / YEARS);
  }

  printf("\nThe Yearly Average Rainfall is: %lf\n", total / YEARS);
  return 0;
}