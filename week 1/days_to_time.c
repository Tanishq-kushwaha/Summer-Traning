// The Modulo Operator
#include<stdio.h>
int main(){
  int remainingDays, remainingDaysAfterWeeks, days, weeks, year;
  printf("Enter Total days : ");
  scanf("%d",&days);
  year = days/365;
  printf("Year : %d \n",year);
  remainingDays = days%365;
  weeks = remainingDays/7;
  printf("Weeks: %d\n",weeks);
   remainingDaysAfterWeeks = remainingDays % 7;
  printf("Day : %d\n",remainingDaysAfterWeeks);
  return 0;
}