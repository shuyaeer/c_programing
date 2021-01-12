#include<stdio.h> /*  ←  入出力関数（printfやscanfなど）を使うために必要 */
#include<math.h>  /*←  数学関数（sqrtやsinなど）を使うために必要 */

int main()
{
  float x,y;

  printf("x=?");
  scanf("%f",&x);

  y=sqrt(x);      /* ←  √xを計算してその結果をyに代入 */
  printf("%f\n",y);
}
