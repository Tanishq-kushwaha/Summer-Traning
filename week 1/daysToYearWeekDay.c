#include<stdio.h>
int main(){
  int x, y, days, weeks, year;
  printf("Enter Total days : ");
  scanf("%d",&days);
  year = days/365;
  printf("Year : %d \n",year);
  x = days%365;
  weeks = x/7;
  printf("Weeks: %d\n",weeks);
   y = x % 7;
  printf("Day : %d\n",y);
  return 0;
}