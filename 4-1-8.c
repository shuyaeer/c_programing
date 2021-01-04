#include<stdio.h>

int main(){
  int i, diff[11];
  int array[11][3];

  for(i=0;i<11;i++){
    scanf("%d,%d,%d", &array[i][0], &array[i][1], &array[i][2]);
  }

  printf("学科番号 本年度　去年度　差\n");
  for(i=0;i<11;i++){
    diff[i] =array[i][1]-array[i][2];
    printf("%d       %d    %d   %d\n", array[i][0], array[i][1], array[i][2], diff[i]);
  }

  for(i=0;i<11;i++){
    if(array[i][0]>=10 && array[i][0]<=19){
      printf("%d  %d  %d\n", array[i][0], array[i][1], array[i][2]);
    }
  }

  printf("志願者増加学科\n");
  for(i=0;i<11;i++){
    if(diff[i]>=0){
      printf("%d  %d  %d\n", array[i][0], array[i][1], array[i][2]);
    }
  }
}