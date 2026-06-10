/*
 * Program: Digit Counter
 * Objective: Accept an integer input from the user and determine the total count of its digits.
 * Logic: Use a while loop to repeatedly perform integer division by 10, 
 * incrementing a counter variable until the number reduces to zero.
 */
 #include<stdio.h>
 int main(){
    int num;
    printf("Enter your number : ");
    scanf("%d",&num);
    int count = 0;
    if(num == 0){
        count = 1;
    }else{
    while(num > 0){
       num = num/10;
       count++;
    }
}
    printf("The total digit count is : %d", count);
 }