/*
 * Program: Square of a Number
 * Objective: Input a single number from the user and calculate its mathematical square value.
 */
 #include<stdio.h>
 int main(){
    int num, square;
    printf("Enter the number :");
    scanf("%d",&num);
    square = num * num;
    printf("Your Answer is: %d",square);
    return 0;
 } 