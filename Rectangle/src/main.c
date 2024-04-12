#include <stdio.h>

int main()
{
  double width;
  double height;
  double perimeter;
  double area;

  printf("Enter a width of the rectangle\n");
  scanf("%lf", &width);
  printf("Enter the height of the rectangle\n");
  scanf("%lf", &height);

  perimeter = (width * 2) + (height * 2);
  area = width * height;

  printf("The width of the rectangle is: %.2lf\n", width);
  printf("The height of the rectangle is: %.2lf\n", height);
  printf("The perimeter of the rectangle is: %.2lf\n", perimeter);
  printf("The area of the rectangle is: %.2lf\n", area);
  return 0;
}