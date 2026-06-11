/*
 * Program: Number Reversal System
 * Objective: Accept an integer input from the user and display its mathematical reverse.
 */
 #include<stdio.h>
 int main(){
  int num;
  int reverse = 0;
  int lastDigit;
  printf("Enter the Number : ");
  scanf("%d",&num);
    for(lastDigit = 0; num > 0; num = num/10){
        lastDigit = num % 10;
        reverse = reverse * 10 + lastDigit;
    }
    printf("The reversed number is: %d\n", reverse);
    return 0;
 }