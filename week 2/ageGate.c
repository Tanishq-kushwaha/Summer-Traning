// Problem 2: The Age Gate
/*
 * Program: Age Gate Eligibility System
 * Objective: Input the user's current age and verify voting eligibility 
 *            using relational operators.
 */
#include<stdio.h>
int main(){
    int age;
   printf("Age Gate Eligibility System \n");
   printf("Enter your age : ");
   scanf("%d",&age);
   if(age >= 18){
    printf("You are eligible to vote.");
   }else{
    printf("You are a minor, access denied.");
   }
   return 0;
}