#include<stdio.h>
#include<math.h>

int main()
{
  int x, y;
  double angle, x1, y1, pi, radian;

  printf("x,y,angle=");
  scanf("%d%d%lf", &x,&y,&angle);
  pi = 3.14;
  radian= pi * angle / 180.0;

  x1 = x * cos(radian) - y * sin(radian);
  y1 = x * sin(radian) + y * cos(radian);

  printf("x1=%5.2lf, y1=%5.2lf\n", x1, y1);
}
