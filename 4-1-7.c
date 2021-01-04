#include<stdio.h>

int main(){
  int i, sum;
  int array[14][2];
  float percent[14];

  sum = 0;
  for(i=0;i<14;i++){
    scanf("%d,%d", &array[i][0], &array[i][1]);
    sum += array[i][1];
  }

  for(i=0;i<14;i++){
    percent[i] = (float)array[i][1]/sum*100;
  }

  printf("NO. Percent\n");
  for(i=0;i<14;i++){
    printf("%d %f\n", array[i][0], percent[i]);
  }

  for(i=0;i<14;i++){
    if(array[i][1]>=30){
      printf("%d %d\n", array[i][0], array[i][1]);
    }
  }

}