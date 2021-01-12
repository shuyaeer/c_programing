#include<stdio.h>
#include<math.h>

int main()
{
  double degree,radian,PI,x,y;
  PI=3.14;
  degree=60;
  radian=PI*degree/180.0; /* ←角度degreeをradianに変換 (60°をπ/3に変換）*/
  x=cos(radian); /* ←radianのcosを求める*/
  y=sin(radian); /* ←radianのsinを求める*/
  printf("cos(%5.2lf)=%5.2lf\n",degree,x);
  printf("sin(%5.2lf)=%5.2lf\n",degree,y);
}
