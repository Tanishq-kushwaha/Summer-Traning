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
    while(num > 0){
        lastDigit = num % 10;
        reverse = reverse * 10 + lastDigit;
        num = num / 10;
    }
    printf("The reversed number is: %d\n", reverse);
    return 0;
 }