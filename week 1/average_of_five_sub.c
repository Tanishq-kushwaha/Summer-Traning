#include<stdio.h>
int main(){
  int first, second, third, fourth, fifth, sum;
  float average;
  printf("Enter your first subject marks :");
  scanf("%d",&first);
  printf("Enter your second subject marks :");
  scanf("%d",&second);
  printf("Enter your third subject marks :");
  scanf("%d",&third);
  printf("Enter your fourth subject marks :");
  scanf("%d",&fourth);
  printf("Enter your fifth subject marks :");
  scanf("%d",&fifth);
  sum = first + second + third + fourth + fifth;
  average = (float)sum/5;
  printf("Average is : %f", average);
  return 0;
}