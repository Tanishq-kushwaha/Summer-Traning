/*
 * Program: Simple Interest Calculator
 * Objective: Calculate the simple interest based on user inputs for Principal, Rate, and Time.
 */

 #include<stdio.h>
 int main(){
    int principalAmount, simpleInterest, rate, time;
    printf("Enter principal Amount : ");
    scanf("%d",&principalAmount);
    printf("Enter Rate : ");
    scanf("%d",&rate);
    printf("Enter Time in years : ");
    scanf("%d",&time);
    simpleInterest = (principalAmount*rate*time)/100;
      printf("Simple Interest is :%d ",simpleInterest );
      return 0;
}

