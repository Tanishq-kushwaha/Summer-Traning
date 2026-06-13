/*
 * Program: Fibonacci Series Generator
 * Objective: Display the Fibonacci sequence up to a user-specified number of terms (N).
 * Logic: Maintain two tracking variables for the first two terms (0 and 1), and use a loop 
 * to continuously calculate and print the next term by summing the previous two.
 */
 #include<stdio.h>
 int main(){
    int n;
    int num1;
    int num2 = 0;
    int num3 = 1;
    printf("Enter your number of terms :" );
    scanf("%d",&n);

    for(int i = n; i <= n; i++){
        n = n - 2;
     num1 = num2 + num3;
     printf("%d %d",num2, num3);
     num2 = num3;
     num3 = num1;
     printf("%d",num1); 
    }
    return 0;
 }