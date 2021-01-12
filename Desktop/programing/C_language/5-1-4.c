#include<stdio.h>
#include<math.h>

int main()
{
  double angle, pi, radian;

  pi = 3.1415926;
  for(angle=0;angle<=360;angle+=15){
    radian= pi * angle / 180.0;
    printf("cos(%5.2lf)=%lf\n", angle, cos(radian));
    printf("sin(%5.2lf)=%lf\n", angle, sin(radian));
    printf("\n");
  }
}
