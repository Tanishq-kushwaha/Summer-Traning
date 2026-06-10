/*
 * Program: Digit Counter
 * Objective: Accept an integer input from the user and determine the total count of its digits.
 */
 #include<stdio.h>
 int main(){
    int num;
    printf("Enter your number : ");
    scanf("%d",&num);
    int count = 0;
    if(num == 0){
        count = 1;
    }
    if(num < 0){
      num = -num;
    }
    while(num > 0){
       num = num/10;
       count++;
    }

    printf("The total digit count is : %d", count);
 }