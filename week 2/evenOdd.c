// Problem 1: The Even/Odd Check
/*
 * Program: Even or Odd Number Checker
 * Objective: Accept an integer input from the user and determine whether 
 *            it is even or odd by checking the remainder using the modulo operator (%).
 */
#include<stdio.h>
int main(){
    int num;
    printf("The Even/Odd Check \n");
    printf("Enter the number :");
    scanf("%d",&num);
    if(num % 2 == 0){
        printf("Number is Even");
    }else{
        printf("Number is Odd");
    }
    return 0;
}