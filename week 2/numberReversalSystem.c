/*
 * Program: Number Reversal System
 * Objective: Accept an integer input from the user and display its mathematical reverse.
 */
 #include<stdio.h>
 int main(){
  int num;
  int reverse = 0;
  int digit;
  int lastDigit;
  printf("Enter the Number : ");
  scanf("%d",&num);
    for(digit = 0; num > 0; num/10){
        digit = num % 10;
        reverse = reverse * 10 + digit;
    }
    printf("%d", reverse);
 }