/*
 * Program: Recursive Factorial Calculator
 * Objective: Calculate the factorial of a given integer using recursive function calls.
 * Logic: Use a base case to return 1 when n is 0 or 1. Otherwise, recursively return n * factorial(n - 1).
 */
 #include<stdio.h>

 int calculateFactorial(int n);

 int main(){
    int n;
    int fact;
   printf("Enter your number : ");
   scanf("%d",&n);
   fact = calculateFactorial(n);
   printf("Factorial is %d", fact);
   return 0;
 }

int calculateFactorial(int n){
 if(n == 1 || n == 0 ){
    return 1;
 }else{
    return n* calculateFactorial(n - 1);
 }
 }