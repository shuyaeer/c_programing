#include<stdio.h>
#include<math.h>

int main()
{
  float l1, l2;

  // l1が斜辺
  printf("l1, l2=");
  scanf("%f%f", &l1, &l2);

  printf("%f\n", sqrt(l1*l1-l2*l2));
}
