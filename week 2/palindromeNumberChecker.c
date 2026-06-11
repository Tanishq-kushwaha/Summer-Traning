/*
 * Program: Palindrome Number Checker
 * Objective: Verify if a user-input integer reads the same backward as forward.
 */
 #include<stdio.h>
 int main(){
    int num , originalNum;
    int lastDigit;
    int isNegative = 0;
    int reverse = 0;
    printf("Enter your number : ");
    scanf("%d",&num);

     originalNum = num;
     if(num < 0){
       isNegative = 1;
       num = -num;
     }
    while(num > 0){
       lastDigit  = num % 10;
       reverse = reverse * 10 + lastDigit;
       num = num /10; 
    }
    if(isNegative){
     reverse = -reverse;
    }
   if(originalNum == reverse){
      printf("The Original number is: %d\n", originalNum);
      printf("The reversed number is: %d\n", reverse);
      printf("user-input integer reads the same backward as forward.");
    return 0; 
   }else{
     printf("User-input integer \"NOT\" reads the same backward as forward.");
     return 0;
   }

 }