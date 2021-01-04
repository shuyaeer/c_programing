#include<stdio.h>

int main()
{ 
  /*変数宣言*/ 
  int count,i,j;
  int number[100],score[100][3];
  float total_person[100],total_subject[3];
  float aver[3]; 
  /*それぞれの科目の合計を入れる変数を０にクリア*/ 
  for (i=0;i<3;i++){
    total_subject[i]=0;
  }
  /*３科目の総計を入れる変数を０にクリア*/ 
  for (i=0;i<100;i++){
    total_person[i]=0;
  } 
  /*人数の入力*/ 
  printf("Please input the number of students=");
  scanf("%d",&count); 
  /*データの入力を人数分繰り返す*/ 
  for(i=0;i<count;i++){
    printf("Please input Num,Eng,Jap,His=");
    scanf("%d,%d,%d,%d",&number[i],&score[i][0],&score[i][1],&score[i][2]); /*データの入力*/ 
  } 
  /*個人別の３科目の合計と科目ごとの合計を計算    この部分↓についての補足Webページ */ 
  for(i=0;i<count;i++){
    for(j=0;j<3;j++){
      total_person[i]=total_person[i]+score[i][j];   /*個人別の３科目の合計を計算*/ 
      total_subject[j]=total_subject[j]+score[i][j]; /*科目別に合計を計算*/
    }
    printf("number=%d Eng=%d Jap=%d His=%d total=%f\n",number[i],score[i][0],score[i][1],score[i][2],total_person[i]); 
  } 
  /*合計点を出力*/ 
  printf("Goukei Eng=%f Jap=%f His=%f \n",total_subject[0],total_subject[1],total_subject[2]); 
  /*科目ごとの平均点を計算*/ 
  for (i=0;i<3;i++){
    aver[i]=total_subject[i]/count;
  } 
  /*平均点を出力*/ 
  printf("Heikin Eng=%f Jap=%f His=%f \n",aver[0],aver[1],aver[2]); 
}
