#include <stdio.h>

#define PAYRATE 12.00
#define TAXRATE_300 .15
#define TAXRATE_150 .20
#define TAXRATE_TOP .25
#define OVERTIME_RATE 1.5
int main()
{
  double hours = 0.0;
  double grossPay = 0.0;
  double totalTax = 0.0;
  double netPay = 0.0;

  printf("How many hours did you work this week?\n");
  scanf("%lf", &hours);

  if (hours > 40)
  {
    double overtime = hours - 40;
    grossPay = 40 * PAYRATE + (overtime * PAYRATE * OVERTIME_RATE);
  }
  else
  {
    grossPay = hours * PAYRATE;
  }

  if (grossPay <= 300)
  {
    totalTax = grossPay * TAXRATE_300;
  }
  else if (grossPay > 300 && grossPay <= 450)
  {
    double nextTaxBracket = grossPay - 300;
    totalTax = 300 * TAXRATE_300 + nextTaxBracket * TAXRATE_150;
  }
  else
  {
    double nextTaxBracket = grossPay - 450;
    totalTax = 300 * TAXRATE_300 + 150 * TAXRATE_150 + nextTaxBracket * TAXRATE_TOP;
  }

  netPay = grossPay - totalTax;
  printf("Your gross pay is: %.2lf\n", grossPay);
  printf("Your total taxes are: %.2lf\n", totalTax);
  printf("Your net pay is: %.2lf\n", netPay);
  return 0;
}

/*
OUTPUT:
- gross pay
- taxes
- net pay

ASSUMPTIONS:
- base rate: $12/hr
- Overtime (over 40 hrs): 1.5x
- Tax rate:
    - 15% of first $300
    - 20% of next $150
    _ 25% of the rest

*/