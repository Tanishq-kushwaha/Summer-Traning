/*
 * Program: Fibonacci Series Generator
 * Objective: Display the Fibonacci sequence up to a user-specified number of terms (N).
 * Logic: Maintain two tracking variables for the first two terms (0 and 1), and use a loop 
 * to continuously calculate and print the next term by summing the previous two.
 */
 #include<stdio.h>
 int main(){
    int num;
    int num1 = 0;
    int num2 = 1;
    printf(Enter your number of terms : );
    scanf("%d"&num);

    for(int i = 0; i < num ; i++){
     num = num1 + num2;
     num = num + num2;
    }
 }