/*
 * Program: Armstrong Number Checker (3-Digit)
 * Objective: Accept a 3-digit integer from the user and verify if it qualifies as an Armstrong number.
 */

 #include<stdio.h>
 int main(){
    int num;
    int lastDigit;
    int sum = 0;
   int originalNum;
   
   printf("Enter your three digit number : ");
   scanf("%d",&num);
   if(num < 100)
   originalNum  = num;
   
    while(num > 0){
     lastDigit = num % 10;
     num = num / 10;  
     sum = sum + lastDigit*lastDigit*lastDigit;
    }

  // printf("%d", sum);

  if(sum == originalNum){
    printf("This is a Armstrong Number.");
    return 0;  
  }else{
    printf("This is Not  a Armstrong Number.");
    return 1;
  }
 }