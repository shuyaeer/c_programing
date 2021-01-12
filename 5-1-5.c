#include<stdio.h>
#include<math.h>

int main()
{
  double x, y, angle, pi, radian;

  pi = 3.1415926;
  printf("x, y, angle=");
  scanf("%lf%lf%lf", &x, &y, &angle);
  radian = pi * angle / 180.0;
  printf("%lf\n", 0.50 * x * y * sin(radian));
}
