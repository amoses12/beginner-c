#include <stdio.h>

int main()
{

  double minutes;
  double days;
  double years;
  double minutesInDay = 60 * 24;
  double minutesInYear = minutesInDay * 365;

  printf("Enter a number of minutes:\n");
  scanf("%lf", &minutes);

  days = minutes / minutesInDay;
  years = minutes / minutesInYear;

  printf("%lf minutes is equal to %lf days and %lf years\n", minutes, days, years);
  return 0;
}