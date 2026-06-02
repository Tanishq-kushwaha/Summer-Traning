/*
 * Program: Remainder Finder
 * Objective: Accept two integers from the user and calculate the remainder using the modulo (%) operator.
 */

 
#include<stdio.h>
int main(){
    int num1, num2, remainder;
    printf("Enter the Dividend : ");
    scanf("%d",&num1);
    printf("Enter the Divisor : ");
    scanf("%d",&num2);
    remainder = num1 % num2;
    printf("Remainder is : %d",remainder);
    return 0;
}